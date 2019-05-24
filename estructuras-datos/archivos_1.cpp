#include <stdio.h>
#include <iostream>
using namespace std;
main()
{
	FILE* examen;//nombre de mi archivo que estar� trabajando
	char cadena[50];
	int enunciado, texto;//variable para captar la salida de la captura de datos
	/*r =Apertura en modo de s�lo lectura. El archivo debe existir
	w = Apertura en modo de s�lo escritura. Si el archivo existe, se reescribir�
		(pierde el contenido anterior). Si el archivo no existe, lo crea.
	a = Apertura en modo de agregar. Si el archivo existe, los datos se agregan al 
		final del archivo, en caso contrario, el archivo se crea
	r+ = Apertura en modo de lectura/escritura. El archivo debe existir.
	w+ = Apertura en modo de lectura/escritura. Si el archivo existe, 
		se reescribir� (pierde el contenido anterior).
	a+ = Apertura en modo de lectura/agregar. Si el archivo no existe lo crea.*/
	//la siguiente l�nea declara la creaci�n del archivo y modo de apertura
	//examen = fopen("prueba.txt", "w+");
	
	//lo anterior lo puedo realizar con una sola l�nea que verifica si fue creado el archivo
	if((examen = fopen("prueba.txt", "w+")) == NULL)
	{
		cout<<"\n\t �El archivo no se puede abrir!";
		system("pause");
	}
	else{
		cout<<"\n\t �El archivo se ha creado correctamente!\n";
		//ahora agrego unas l�neas de cadena con su valor, se guardan en el archivo, son repetidas
		fputs("hola\n", examen);
		fputs("hola\n", examen);
		fputs("hola\n", examen);
		fputs("hola\n", examen);
		//agregamos un valor a cadena
		char cadena[50]="Escribe un s�per c�digo\n";
		fputs(cadena, examen);
		//ahora dae lectura a una cadena larga, a un enunciado
		cout<<"A continuaci�n escriba un enunciado, cuando termine presione CTRL + Z";
		//EOF significa End Of File = Fin De Archivo
		while((enunciado = getchar())!=EOF){
			fputc(enunciado, examen);
		}
		//importante siempre cerrar el archivo
		fclose(examen);
		system("pause");
	}
	//ahora abrimos el archivo para dar lectura y visualizarlo en pantalla
	/*char direccion[]="C:\\udg\\algoEstDatos\\cods\\prueba.txt";
	examen=fopen(direccion,"rt");//rt = leer texto = read text*/
	if((examen = fopen("prueba.txt", "r+")) == NULL)
	{
		cout<<"\n\t �El archivo no se puede abrir! \n";
		system("pause");
	}
	else{
		cout<<"Comenzamos la impresi�n del contenido del archivo :D \n";
		system("pause");
		//mientras se encuentre contenido, se leer� el archivo
		while((texto = fgetc(examen))!=EOF){
			//ahora verificamos si encuentra un fin de l�nea, por ello uso el /n
			if(texto=='\n'){
				cout<<"\n";
			}else{
				//esto se ejecuta cuando no encuentra el fin de l�nea o fin de archivo
				putchar(texto);
			}
		}
		//nunca olvidar cerrar el archivo
		fclose(examen);
	}
}

