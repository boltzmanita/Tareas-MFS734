# Directorio de trabajo e información del estudiante
dir=$(pwd)
Nombre="Julio Ramirez"
Cuenta="MAF200209"
carpeta="north-pacific-gyre"
echo "Este Trabajo es presentado por: " $Nombre  > myfile_Julio.txt
echo "Con numero de cuenta: "  $Cuenta >> myfile_Julio.txt
echo "Estoy analizando los archivos de la carpeta " $carpeta "ubicada en " $dir >> myfile_Julio.txt

tail -n 3 myfile_Julio.txt


# Archivos en Carpeta Solo tomamos los archivos .txt

len=$(ls *.txt | wc -l)

ls *.txt >> myfile_Julio.txt 
echo "Archivos en la carpeta: " #>> myfile_Julio.txt
tail -n ${len} myfile_Julio.txt

# En caso de querer ordenados por numero de líneas:
#wc -l *.txt| sort -n >> myfile_Julio.txt  

echo "Archivos Ordenados:"  #>> myfile_Julio.txt
ls *.txt | sort -n >> myfile_Julio.txt  
tail -n ${len} myfile_Julio.txt

mkdir -p Nuevos_archivos

for file in  $(tail -n ${len} myfile_Julio.txt)
do
   cp "$file" "${file/%.txt/-1.txt}"
done

mv *-1.txt Nuevos_archivos/

for file in  Nuevos_archivos/*-1.txt
do
   echo wc $file >> ../myfile_Julio.txt
done
