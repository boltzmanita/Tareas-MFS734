echo -n "" > Elementos-ordenados.log

for file in  *.pdb
do
   cat $file >> Elementos-ordenados.log
done

for file in *t*.pdb; do     head -n 3 $file; done



