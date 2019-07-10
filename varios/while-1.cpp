#include <cstdlib>
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include"locale.h"

//acuerdos
/*
*/
using namespace std;
const int constante=1;
int main()
{
	setlocale(LC_CTYPE, "Spanish");
	//hacer un programa que muestre el incremento de una variable que inica en 1 y termine en 10
	int x=1;
	//lo hacemos sin for
	cout<<"Resuelvo el ejercicio sin WHILE"<<endl;
	cout<<"El valor de x es: "<<x++<<endl;
	cout<<"El valor de x es: "<<x++<<endl;
	cout<<"El valor de x es: "<<x++<<endl;
	cout<<"El valor de x es: "<<x++<<endl;
	cout<<"El valor de x es: "<<x++<<endl;
	cout<<"El valor de x es: "<<x++<<endl;
	cout<<"El valor de x es: "<<x++<<endl;
	cout<<"El valor de x es: "<<x++<<endl;
	cout<<"El valor de x es: "<<x++<<endl;
	cout<<"El valor de x es: "<<x++<<endl;
	cout<<"El valor de la constante es: "<<constante<<endl;
	//el comando getch genera una pausa, porque espera que presionemos cualquite tecla
	getch();
	//limipio mi pantalla
	system("cls");
	cout<<"Resuelvo el ejercicio USANDO WHILE"<<endl;
	x=1;//inicializo mi variable x a 1
	while (x<=10)
	{
		cout<<"El valor de x es: "<<x<<endl;
		cout<<"Es la vuelta número: "<<x++<<endl;
	}
	getch();
	//limipio mi pantalla
	system("cls");
	cout<<"Resuelvo el ejercicio USANDO FOR"<<endl;
	x=1;//inicializo mi variable x a 1
	for (int x2=1; x2<=10; x2++)
	{
		cout<<"El valor de x2 es: "<<x2<<endl;
		cout<<"Es la vuelta número: "<<x2<<endl;
	}
	getch();
	//limipio mi pantalla
	system("cls");
	cout<<"Resuelvo el ejercicio USANDO FOR con INCREMENTO DE 2"<<endl;
	x=1;//inicializo mi variable x a 1
	for (int x2=1; x2<=10; x2+=2)
	{
		cout<<"El valor de x2 es: "<<x2<<endl;
		cout<<"Es la vuelta número: "<<x++<<endl;
	}
	
	
	
	
	
}
