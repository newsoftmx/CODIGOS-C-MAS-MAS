#include <cstdlib>
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<cmath>
#include"locale.h"
//variables globales
const int constante=1;
int ciclos=1;
float res;
//fin variables globales
int sumaNumerosPorValor(int d, int c, bool braulio){//parametros o vriables a trabajar
	/*
	Definimos una nueva funcion a la cual podremos llamar desde 
	cualquier punto de nuestro programa
	en este caso le llamamos "suma" y la establecimos 
	con parametros de enteros
	*/
	int calculo, daniel, brauli;
	calculo=d+c;
	return calculo;
	/*return d + c;*/
}
float multiplicacion(float num1, float num2)
{
	res=num1*num2;
	return res;
}
/*función por referencia*/
int sumaNumerosPorReferencia(int &e, int &f)
{
	int suma;
	e=e+2;
	f=f+4;
	suma=e+f;
	return suma;
}
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Spanish");
	int a, b, resultado;
	float n1,n2,result;
	cout<<"Bienvenido al programa de funciones "<<endl;
	cout<<"Aprendera a usar metodos por valor y por referencia"<<endl;
	cout<<"Escriba el valor del primer numero: "<<endl;
	cin>>a; 
	cout<<"Escriba el valor del segundo numero: "<<endl;
	cin>>b;
	cout<<"A continuación realizaremos la suma de estos numeros"<<
	" por esto llamaremos al metodo sumaNumerosPorValor"<<endl;
	system("pause");
	cout<<"El valor del resultado de la suma por valor es: ";
	resultado=sumaNumerosPorValor(a,b,true);
	cout<<resultado<<endl;
	cout<<"Ahora muestro el valor de la variable a y b, para que "<<
	"nos percatemos de que su valor permanece intacto"<<endl;
	cout<<"Valor de a: "<<a<<" Valor de b: "<<b<<endl;
	
	/***********************************************/
	cout<<"A continuación realizaremos la suma de estos numeros"<<
	" pero llamaremos al metodo sumaNumerosPorReferencia"<<endl;
	system("pause");
	cout<<"El valor del resultado de la suma por referencia es: ";
	resultado=sumaNumerosPorReferencia(a, b);
	cout<<resultado<<endl;
	cout<<"Ahora muestro el valor de la variable a y b, para que "<<
	"nos percatemos de que su valor fue modificado"<<endl;
	cout<<"Valor de a: "<<a<<" Valor de b: "<<b<<endl;
	system("pause"); system("cls");
	cout<<"Ahora realizaremos una multiplicación\n";
	cout<<"Captura el primer número: ";cin>>n1;
	cout<<"Captura el segundo número: ";cin>>n2;
	result=multiplicacion(n1, n2);
	cout<<"El resultado de la multiplicación es: "<<result;
	system("pause");
	/* *********** ***********tarea
	completar este código para que realice las siguientes operaciones usando métodos(funciones)
	los hará por paso por valor y paso por referencia
	
	1) multiplicación, 
	2) división
	3) resta
	4) raiz
	y 10 mas de la función cmath
	
	************************  */
	
	
	
	return 0;
	
}
