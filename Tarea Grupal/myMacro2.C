void myMacro2 ()
{	
	//WRITE HERE YOUR OWN CODE
	TFile miarchivo("grafico.root","UPDATE");
	TF2 f1("f1", "sin(x)*sin(y)/(x*y)", -10., 10., -10.,10.);
	f1.Draw("surf1");
	f1.Write();
	miarchivo .Close();

}
