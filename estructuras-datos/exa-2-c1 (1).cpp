#include<iostream>
/*#include<conio.h>
#include<      >
#include<      >
#include <     >*/
int sumaNumerosPorValor(int d, int c){
	/*
	Definimos una nueva funcion a la cual podremos llamar desde 
	cualquier punto de nuestro programa
	en este caso le llamamos "suma" y la establecimos 
	con parametros de enteros
	*/
	int calculo;
	calculo=d+c;
	return calculo;
	/*return d + c;*/
}
/*función por referencia*/
int sumaNumerosPorReferencia(int &, int &)
{
	int suma;
	e=e+2;
	f=f+4;
	suma=e+f;
	return ;
}
using namespace std;
int main()
{
	int a, b, resultado;
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
	resultado=sumaNumerosPorValor(a,b);
	cout<<resultado<<endl;
	cout<<"Ahora muestro el valor de la variable a y b, para que "<<
	"nos percatemos de que su valor permanece intacto"<<endl;
	cout<<"Valor de a: "<<a<<" Valor de b: "<<b<<endl;
	
	/***********************************************/
	cout<<"A continuación realizaremos la suma de estos numeros"<<
	" pero llamaremos al metodo sumaNumerosPorReferencia"<<endl;
	system("pause");
	cout<<"El valor del resultado de la suma por referencia es: ";
	resultado=sumaNumerosPorReferencia( ,  );
	cout<<resultado<<endl;
	cout<<"Ahora muestro el valor de la variable a y b, para que "<<
	"nos percatemos de que su valor fue modificado"<<endl;
	cout<<"Valor de a: "<<a<<" Valor de b: "<<b<<endl;
	return 0;
}
