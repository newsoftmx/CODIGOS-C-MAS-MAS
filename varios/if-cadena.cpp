#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{
	char opcion1[] = "Verano";
	char opcion2[] = "Algoritmo";
	
	if(strcmp(opcion1,opcion2)==1)
	{
		cout<<"las dos cadenas son diferentes\n";
	}
	if(strcmp(opcion1, opcion2) > 0 )
	{
		cout<<"las cadena opcion1 es mas grande\n";
	}
	char opcion3[]="Hola";
	if(opcion3 == "Hola")
	{
		cout<<"opcion 1 verificado\n";	
	}
	//system("pause");
	getch();
	return 0;
}
