# Instrucción 1
echo -n "" > Elementos-ordenados.log

for file in  *.pdb
do
   cat $file >> Elementos-ordenados.log
done

# Instrucción 2 
for file in *t*.pdb; do     cut -c -14 $file; done

# Instrucción 3: Falta terminar este inciso.
for file in *t*.pdb; do     cut -c -14 $file; done

# Instrucción 4 
for file in *.pdb; 
do	mkdir -p "${file%.*}"
	echo > "${file%.*}"/README.md "Este archivo fue creado por Julio Ramirez"	
done

