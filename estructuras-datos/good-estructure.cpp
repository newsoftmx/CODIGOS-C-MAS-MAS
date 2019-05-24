/*revisar páginas 506 y 507
510 funciones, paso por valor y por referencia
*/
#include<iostream>
#include<stdio.h>
#include <stdlib.h>
using namespace std;
//declaro mi estructura
struct persona{
	char nombre[24], apellidoM[24], curp[18], rfc[13], numInterior[5];
	string apellidoP, calle;
	unsigned int edad, numExterior;
	float peso;
}alumno, empleado, docentes;

struct otraForma{
	char nombre[24], apellidoM[24], curp[18], rfc[13], numInterior[5];
	string apellidoP, calle;
	unsigned int edad, numExterior;
	float peso;
};

int main()
{
	//hago una instancia de mi estructura y le llamo otraForma2
	struct otraForma otraForma2;
	//const int valorConstante=100;
	//valorConstante=valorConstante+1;
	//comienzo a capturar los datos de los atributos de mi 
	//estructura, solo capturare algunos
	cout<<"Capture los datos del empleado"<<endl;
	cout<<"Ingrese su primer nombre: "<<endl;
	cin>>empleado.nombre;
	cout<<endl<<"Ingrese su primer apellido"<<endl;
	cin>>empleado.apellidoP;
	cout<<endl<<"Ingrese su edad"<<endl;
	cin>>empleado.edad;
	
	//muestro los datos que capture, los demas quedan vacios
	cout<<"Ahora mostramos los datos"<<endl;
	cout<<"Nombre: "<<empleado.nombre<<endl;
	cout<<"Apellido paterno: "<<empleado.apellidoP<<endl;
	cout<<"Apellido paterno: "<<empleado.apellidoM<<endl;
	cout<<"CURP: "<<empleado.curp<<endl;
	cout<<"RFC: "<<empleado.rfc<<endl;
	cout<<"Calle: "<<empleado.calle<<endl;
	cout<<"Num. Exterior: "<<empleado.numExterior<<endl;
	cout<<"Num. Interior: "<<empleado.numInterior<<endl;
	cout<<"Edad: "<<empleado.edad<<endl;
	cout<<"Peso: "<<empleado.peso<<endl;
	cout<<"Ahora borraremos la pantalla y usaremos otra estructura";
	system("pause");
	system("cls");
	//comienzo a capturar los datos de los atributos de mi 
	//estructura llamada otraForma, solo capturare algunos
	cout<<"Capture los datos del empleado usando la estructura\n otraForma"<<endl;
	cout<<"Ingrese su primer nombre: "<<endl;
	cin>>otraForma2.nombre;
	cout<<endl<<"Ingrese su apellido paterno: "<<endl;
	cin>>otraForma2.apellidoP;
	cout<<endl<<"Ingrese su apellido materno: "<<endl;
	cin>>otraForma2.apellidoM;
	cout<<endl<<"Ingrese su curp: "<<endl;
	cin>>otraForma2.curp;
	cout<<endl<<"Ingrese su rfc: "<<endl;
	cin>>otraForma2.rfc;
	cout<<endl<<"Ingrese su calle: "<<endl;
	cin>>otraForma2.calle;
	cout<<endl<<"Ingrese su num. exterior: "<<endl;
	cin>>otraForma2.numExterior;
	cout<<endl<<"Ingrese su num. interior: "<<endl;
	cin>>otraForma2.numInterior;
	cout<<endl<<"Ingrese su edad"<<endl;
	cin>>otraForma2.edad;
	cout<<endl<<"Ingrese su peso: "<<endl;
	cin>>otraForma2.peso;
	cout<<"ahora limpiare la pantalla y mostraremos la"
	" estructura otraForma2";
	system("pause");
	system("cls");//limpia la pantalla
	//muestro el valor de los atributos de la estructura otraForma2
	cout<<"Ahora mostramos los datos"<<endl;
	cout<<"Nombre: "<<otraForma2.nombre<<endl;
	cout<<"Apellido paterno: "<<otraForma2.apellidoP<<endl;
	cout<<"Apellido paterno: "<<otraForma2.apellidoM<<endl;
	cout<<"CURP: "<<otraForma2.curp<<endl;
	cout<<"RFC: "<<otraForma2.rfc<<endl;
	cout<<"Calle: "<<otraForma2.calle<<endl;
	cout<<"Num. Exterior: "<<otraForma2.numExterior<<endl;
	cout<<"Num. Interior: "<<otraForma2.numInterior<<endl;
	cout<<"Edad: "<<otraForma2.edad<<endl;
	cout<<"Peso: "<<otraForma2.peso<<endl;
	return 0;//todo se ejecuto correctamente
}
