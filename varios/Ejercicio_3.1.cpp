#include<stdio.h>

 main(){
	char pax[] = "Juan sin miedo";
	//con el & se le indica que corte los primeros n caracteres de la cadena
	printf("%s\n\n %s\n\n",pax, &pax[8]);//Salida #1 y #2
	//puts imprimi una cadena completa, sin neecsidad de indicar formato de salda
	puts(pax);//Salida #3
	puts(&pax[4]);//Salida #4
	
	//return 0;
}
