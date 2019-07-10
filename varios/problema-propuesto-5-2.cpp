/*problema propuesto 5.1*/
#include <cstdlib>
#include<iostream>
#include<stdio.h>
#include"locale.h"
using namespace std;
int main()
{
	//especificamos que se puede escribir con acentos usando LC_CTYPE
	setlocale(LC_CTYPE, "Spanish");
	//variables locales
	int dia=0, mes=0, ano=0, diasAno;
	
	//solicitamos los datos}
	cout<<"Capture una fecha usando solo valores numericos positivos mayores a 0\n";
	//capturamos dia
	do{
		cout<<"Captura el día (0 a 31): ";cin>>dia;	
	}while (dia<=0);
	//capturamos mes
	do{
		cout<<"Captura el mes (0 a 12): ";cin>>mes;	
	}while (dia<=0);
	//capturamos ano
	do{
		cout<<"Captura el año: ";cin>>ano;	
	}while (dia<=0);
	//*obtengo los días multiplicando por los meses capturados
	if(mes==1)
	{
		diasAno=dia;
	}
	else if(mes==2)
	{
		diasAno=31+dia;
	}
	else
	{
		diasAno=((30*(mes-1))+dia)-2;
	}
	//hasta aquí obtuve los días de los meses de todo el año, pero falta verificar cuantos meses de 31 días
	//son los que trabajo, para eso me auxilio de if
	//veficio si ha trabajado algun mes con 31 días
	
	/*
	enero =1=2
	marzo=3=4
	mayo=5=6
	julio=7=7
	agosto=8=9
	octubre=10=11
	*/
	if(mes>=11)
	{
		diasAno=diasAno+6;
	}
	else if(mes>=9)
	{
		diasAno=diasAno+5;
	}
	else if(mes>=7)
	{
		diasAno=diasAno+4;
	}
	else if(mes>=6)
	{
		diasAno=diasAno+3;
	}
	else if(mes>=4)
	{
		diasAno=diasAno+2;
	}
	cout<<"Los días del año son: "<<diasAno;
	system("pause");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
