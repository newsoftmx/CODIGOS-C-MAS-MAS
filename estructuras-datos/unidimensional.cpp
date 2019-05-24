#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main(){
	int numeros[10000],a;//va de la posición 0 al 9
	//lleno mi arreglo de valores aleatorios
	for(a=0;a<10000;a++){
		numeros[a]=rand()%1000+1;
		//numeros [a]=a+1;
	}
	//muestro el contenido de mi arreglo
	for(a=0;a<10000;a++){
		//cout<<numeros[x]<<endl;
		cout<<"EL valor del arreglo en la posicion "<<a<<" es: "<<numeros[a]<<endl;
	}
	cout<<endl<<"ahora vamos a hacerlo al revez"<<endl;
	getch();
	Sleep(2000);
	system("CLS");
	cout<<"Prueba 1"<<endl;
	for(int a=10000-1;a>=0;a--){
		cout<<numeros[a]<<endl;
	}
	getch();
	for(a=0;a<10000;a++){
		cout<<"El valor del arreglo es: "<<numeros[a]<<endl;
	}
	//getch();
	return 0;
}
