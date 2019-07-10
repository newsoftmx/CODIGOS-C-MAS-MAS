#include<iostream>
#include<conio.h>
//#include<string.h>
#include<cstring>
using namespace std;

int main()
{
	char opcion1[] = "Verano";
	char opcion2[] = "Varano";
	char enero[]="enero", escribio[12];
	
	if(strcmp(opcion1,opcion2)==1)
	{
		cout<<"las dos cadenas son diferentes\n";
	}
	if(strcmp(opcion1,opcion2)==0)
	{
		cout<<"las dos cadenas son IGUALES\n";
	}
	cout<<"Escribe el mes ";
	cin>>escribio;
	if(strcmp(escribio,enero)==0)
	{
		char escribio[12]="01\n";
		cout<<escribio;
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
