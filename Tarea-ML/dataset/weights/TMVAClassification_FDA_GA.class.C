// Class: ReadFDA_GA
// Automatically generated by MethodBase::MakeClass
//

/* configuration options =====================================================

#GEN -*-*-*-*-*-*-*-*-*-*-*- general info -*-*-*-*-*-*-*-*-*-*-*-

Method         : FDA::FDA_GA
TMVA Release   : 4.2.1         [262657]
ROOT Release   : 6.28/02       [400386]
Creator        : boltzman
Date           : Wed Jun 21 23:45:06 2023
Host           : Linux root-ubuntu-2004-3 5.4.0-128-generic #144-Ubuntu SMP Tue Sep 20 11:00:04 UTC 2022 x86_64 x86_64 x86_64 GNU/Linux
Dir            : /home/boltzman/Documents/Clases/MFS734/Proyectos/Tarea-ML
Training events: 2000
Analysis type  : [Classification]


#OPT -*-*-*-*-*-*-*-*-*-*-*-*- options -*-*-*-*-*-*-*-*-*-*-*-*-

# Set by User:
V: "False" [Verbose output (short form of "VerbosityLevel" below - overrides the latter one)]
H: "True" [Print method-specific help message]
Formula: "(0)+(1)*x0+(2)*x1+(3)*x2+(4)*x3" [The discrimination formula]
ParRanges: "(-1,1);(-10,10);(-10,10);(-10,10);(-10,10)" [Parameter ranges]
FitMethod: "GA" [Optimisation Method]
# Default:
VerbosityLevel: "Default" [Verbosity level]
VarTransform: "None" [List of variable transformations performed before training, e.g., "D_Background,P_Signal,G,N_AllClasses" for: "Decorrelation, PCA-transformation, Gaussianisation, Normalisation, each for the given class of events ('AllClasses' denotes all events of all classes, if no class indication is given, 'All' is assumed)"]
CreateMVAPdfs: "False" [Create PDFs for classifier outputs (signal and background)]
IgnoreNegWeightsInTraining: "False" [Events with negative weights are ignored in the training (but are included for testing and performance evaluation)]
Converger: "None" [FitMethod uses Converger to improve result]
##


#VAR -*-*-*-*-*-*-*-*-*-*-*-* variables *-*-*-*-*-*-*-*-*-*-*-*-

NVar 4
var1+var2                     myvar1                        myvar1                        myvar1                                                          'F'    [-9.33803939819,7.69307804108]
var1-var2                     myvar2                        myvar2                        Expression 2                                                    'F'    [-3.25508260727,4.02912044525]
var3                          var3                          var3                          Variable 3                    units                             'F'    [-5.2777428627,4.64297914505]
var4                          var4                          var4                          Variable 4                    units                             'F'    [-5.6007027626,4.67435789108]
NSpec 2
var1*2                        spec1                         spec1                         Spectator 1                   units                             'F'    [-9.91655540466,8.7030172348]
var1*3                        spec2                         spec2                         Spectator 2                   units                             'F'    [-14.874833107,13.0545253754]


============================================================================ */

#include <array>
#include <vector>
#include <cmath>
#include <string>
#include <iostream>

#ifndef IClassifierReader__def
#define IClassifierReader__def

class IClassifierReader {

 public:

   // constructor
   IClassifierReader() : fStatusIsClean( true ) {}
   virtual ~IClassifierReader() {}

   // return classifier response
   virtual double GetMvaValue( const std::vector<double>& inputValues ) const = 0;

   // returns classifier status
   bool IsStatusClean() const { return fStatusIsClean; }

 protected:

   bool fStatusIsClean;
};

#endif

class ReadFDA_GA : public IClassifierReader {

 public:

   // constructor
   ReadFDA_GA( std::vector<std::string>& theInputVars )
      : IClassifierReader(),
        fClassName( "ReadFDA_GA" ),
        fNvars( 4 )
   {
      // the training input variables
      const char* inputVars[] = { "var1+var2", "var1-var2", "var3", "var4" };

      // sanity checks
      if (theInputVars.size() <= 0) {
         std::cout << "Problem in class \"" << fClassName << "\": empty input vector" << std::endl;
         fStatusIsClean = false;
      }

      if (theInputVars.size() != fNvars) {
         std::cout << "Problem in class \"" << fClassName << "\": mismatch in number of input values: "
                   << theInputVars.size() << " != " << fNvars << std::endl;
         fStatusIsClean = false;
      }

      // validate input variables
      for (size_t ivar = 0; ivar < theInputVars.size(); ivar++) {
         if (theInputVars[ivar] != inputVars[ivar]) {
            std::cout << "Problem in class \"" << fClassName << "\": mismatch in input variable names" << std::endl
                      << " for variable [" << ivar << "]: " << theInputVars[ivar].c_str() << " != " << inputVars[ivar] << std::endl;
            fStatusIsClean = false;
         }
      }

      // initialize min and max vectors (for normalisation)
      fVmin[0] = 0;
      fVmax[0] = 0;
      fVmin[1] = 0;
      fVmax[1] = 0;
      fVmin[2] = 0;
      fVmax[2] = 0;
      fVmin[3] = 0;
      fVmax[3] = 0;

      // initialize input variable types
      fType[0] = 'F';
      fType[1] = 'F';
      fType[2] = 'F';
      fType[3] = 'F';

      // initialize constants
      Initialize();

   }

   // destructor
   virtual ~ReadFDA_GA() {
      Clear(); // method-specific
   }

   // the classifier response
   // "inputValues" is a vector of input values in the same order as the
   // variables given to the constructor
   double GetMvaValue( const std::vector<double>& inputValues ) const override;

 private:

   // method-specific destructor
   void Clear();

   // common member variables
   const char* fClassName;

   const size_t fNvars;
   size_t GetNvar()           const { return fNvars; }
   char   GetType( int ivar ) const { return fType[ivar]; }

   // normalisation of input variables
   double fVmin[4];
   double fVmax[4];
   double NormVariable( double x, double xmin, double xmax ) const {
      // normalise to output range: [-1, 1]
      return 2*(x - xmin)/(xmax - xmin) - 1.0;
   }

   // type of input variable: 'F' or 'I'
   char   fType[4];

   // initialize internal variables
   void Initialize();
   double GetMvaValue__( const std::vector<double>& inputValues ) const;

   // private members (method specific)
   double              fParameter[5];
};

inline void ReadFDA_GA::Initialize() 
{
   fParameter[0] = 0.49877342409793;
   fParameter[1] = 0;
   fParameter[2] = 0;
   fParameter[3] = 0;
   fParameter[4] = 0.169203339603799;
}

inline double ReadFDA_GA::GetMvaValue__( const std::vector<double>& inputValues ) const
{
   // interpret the formula
   double retval = fParameter[0]+fParameter[1]*inputValues[0]+fParameter[2]*inputValues[1]+fParameter[3]*inputValues[2]+fParameter[4]*inputValues[3];

   return retval; 
}

// Clean up
inline void ReadFDA_GA::Clear() 
{
   // nothing to clear
}
inline double ReadFDA_GA::GetMvaValue( const std::vector<double>& inputValues ) const
{
   // classifier response value
   double retval = 0;

   // classifier response, sanity check first
   if (!IsStatusClean()) {
      std::cout << "Problem in class \"" << fClassName << "\": cannot return classifier response"
                << " because status is dirty" << std::endl;
   }
   else {
         retval = GetMvaValue__( inputValues );
   }

   return retval;
}
