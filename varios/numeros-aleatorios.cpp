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

//fin variables globales
int main()
{
	setlocale(LC_CTYPE, "Spanish");
	int aleatorio;
	float aleatorioFlotante;
	bool aleatorioBooleano;
	cout<<"Genero un número aleatorio y lo muestro\n";
	system("pause");
	//genero un número aleatorio
	aleatorio = rand()%10;
	cout<<"El número aleatorio que fue generado es: "<<aleatorio<<"\n";
	system("pause");
	cout<<"Realizo un ciclo que vaya de 1 a 10 y me genera números aleatorios y los muestre\n";
	system("pause");
	//hacemos el ciclo que genera el numero aleatorio
	for (ciclos; ciclos<=10;ciclos++)
	{
		//genero número aleatorio entre 0 y 20 y lo guardo en variable aleatorio
		aleatorio=rand()%20;
		cout<<"El valor aleatorio generado es: "<<aleatorio<<" en la vuelta"<<ciclos<<"\n";
	}
	system("pause");
	cout<<"Realizo un ciclo que vaya de 1 a 100 y me genera números aleatorios y los muestre\n";
	system("pause");
	//hacemos el ciclo que genera el numero aleatorio
	for (ciclos=1; ciclos<=100;ciclos++)
	{
		//genero número aleatorio entre 0 y 20 y lo guardo en variable aleatorio
		aleatorio=rand()%2000+1;//agregamos el +1, porque no deseo el número 0
		cout<<"El valor aleatorio generado es: "<<aleatorio<<" en la vuelta"<<ciclos<<"\n";
	}
	system("pause");
	cout<<"Realizo un ciclo que vaya de 1 a 100 y me genera números aleatorios con DECIMALES y los muestre\n";
	system("pause");
	//hacemos el ciclo que genera el numero aleatorio
	for (ciclos=1; ciclos<=100;ciclos++)
	{
		//genero número aleatorio entre 0 y 20 y lo guardo en variable aleatorio
		aleatorioFlotante=rand()%2000+1;//agregamos el +1, porque no deseo el número 0
		cout<<"El valor aleatorio generado es: "<<aleatorioFlotante<<" en la vuelta"<<ciclos<<"\n";
	}
	system("pause");
	cout<<"Realizo un ciclo que vaya de 1 a 100 y me genera números aleatorios 0 ó 1 (BOOLEANOS) y los muestre\n";
	system("pause");
	//hacemos el ciclo que genera el numero aleatorio
	for (ciclos=1; ciclos<=1000;ciclos++)
	{
		//genero número aleatorio entre 0 y 1 y lo guardo en variable aleatorio
		aleatorioBooleano=(bool)((rand()%200)/100);//agregamos el +1, porque no deseo el número 0
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
