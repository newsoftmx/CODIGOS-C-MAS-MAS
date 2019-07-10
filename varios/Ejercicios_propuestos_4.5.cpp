#include <cstdlib>
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Spanish");
	
	int dia, ano;
	bool mes;
	
	cout<<"Por favor digite el día: ";cin>>dia;
	cout<<"Por favor digite el mes con letra: ";cin>>mes;
	cout<<"Por favor digite el año: ";cin>>ano;
	
	switch (mes)
	{
		case 'Enero': cout<<" 01 "; break;
		case 'Febrero':	cout<<" 02 "; break;
		case 'Marzo': cout<<" 03 ";	break;
		case 'Abril': cout<<" 04 ";	break;
		case 'Mayo': cout<<" 05 "; break;
		case 'Junio': cout<<" 06 "; break;
		case 'Julio': cout<<" 07 ";	break;
		case 'Agosto': cout<<" 08 "; break;
		case 'Septiembre': cout<<" 09 "; break;
		case 'Octubre': cout<<" 10 "; break;
		case 'Noviembre': cout<<" 11 "; break;
		case 'Diciembre': cout<<" 12 ";	break;

			default: cout<<" El mes no corresponde, favor de interarlo de nuevo. "<<endl;	
}
	cout<<"\nLa fecha registrada es: "<<dia<<" del mes "<<mes<<" del año "<<ano<<endl<<endl;								
	system("pause");
	return 0;
}
