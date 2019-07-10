#include <cstdlib>
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<cmath>
#include"locale.h"
using namespace std;
//variables globales
	int ciclos=1;
	int aleatorio;
	float aleatorioFlotante;
	bool aleatorioBooleano;
//fin variables globales

//regi�n de m�todos
//m�todo que genera 10 valores enteros aleatorios 
inline void aleatoriosEnteros10()
{
	cout<<"Realizo un ciclo que vaya de 1 a 10 y me genera n�meros aleatorios y los muestre\n";
	system("pause");
	//hacemos el ciclo que genera el numero aleatorio
	for (ciclos; ciclos<=10;ciclos++)
	{
		//genero n�mero aleatorio entre 0 y 20 y lo guardo en variable aleatorio
		aleatorio=rand()%20;
		cout<<"El valor aleatorio generado es: "<<aleatorio<<" en la vuelta"<<ciclos<<"\n";
	}
}

//metodo que genera 100 valores enteros aleatorios
inline void aleatoriosEnteros100()
{
	system("pause");
	cout<<"Realizo un ciclo que vaya de 1 a 100 y me genera n�meros aleatorios y los muestre\n";
	system("pause");
	//hacemos el ciclo que genera el numero aleatorio
	for (ciclos=1; ciclos<=100;ciclos++)
	{
		//genero n�mero aleatorio entre 0 y 20 y lo guardo en variable aleatorio
		aleatorio=rand()%2000+1;//agregamos el +1, porque no deseo el n�mero 0
		cout<<"El valor aleatorio generado es: "<<aleatorio<<" en la vuelta"<<ciclos<<"\n";
	}
}
//metodo que genera 100 valores DECIMALES aleatorios
inline void aleatoriosDecimales()
{
	system("pause");
	cout<<"Realizo un ciclo que vaya de 1 a 100 y me genera n�meros aleatorios con DECIMALES y los muestre\n";
	system("pause");
	//hacemos el ciclo que genera el numero aleatorio
	for (ciclos=1; ciclos<=100;ciclos++)
	{
		//genero n�mero aleatorio entre 0 y 20 y lo guardo en variable aleatorio
		aleatorioFlotante=rand()%2000+1;//agregamos el +1, porque no deseo el n�mero 0
		cout<<"El valor aleatorio generado es: "<<aleatorioFlotante<<" en la vuelta"<<ciclos<<"\n";
	}
}
//metodo que genera 100 valores BOOLEANOS aleatorios
inline void aleatoriosBooleanos()
{
	system("pause");
	cout<<"Realizo un ciclo que vaya de 1 a 100 y me genera n�meros aleatorios 0 � 1 (BOOLEANOS) y los muestre\n";
	system("pause");
	//hacemos el ciclo que genera el numero aleatorio
	for (ciclos=1; ciclos<=1000;ciclos++)
	{
		//genero n�mero aleatorio entre 0 y 1 y lo guardo en variable aleatorio
		aleatorioBooleano=(bool)((rand()%200)/100);//agregamos el +1, porque no deseo el n�mero 0
		cout<<"El valor aleatorio generado es: "<<aleatorioBooleano<<" en la vuelta"<<ciclos<<"\n";
		if(aleatorioBooleano==true)
		{
			cout<<"El boleano es TRUE, prueba de caja aceptada\n";
		}
		else
		{
			cout<<"El boleano es FALSE, prueba de caja no aceptada\n";
		}
			
	}
}
//fin de regi�n de m�todos
int main()
{
	setlocale(LC_CTYPE, "Spanish");
	cout<<"Genero un n�mero aleatorio y lo muestro\n";
	system("pause");
	//genero un n�mero aleatorio
	aleatorio = rand()%10;
	cout<<"El n�mero aleatorio que fue generado es: "<<aleatorio<<"\n";
	system("pause");
	
	//mando llamar al metodo de aleatoriosEntero
	aleatoriosEnteros10();
	aleatoriosEnteros100();
	aleatoriosDecimales();
	aleatoriosBooleanos();
	
}
