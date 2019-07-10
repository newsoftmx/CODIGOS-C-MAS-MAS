/*Problema
Nestle méxico necesita conocer la cantidad de productos
media crema nestle, que se producen en una linea de 
producción, además cada producto tiene un codigo al final,
este código indica el nivel de calidad de esta media
crema, así mismo este nivel, determina el mercado al cual
será puesto a la venta

--Determine la cantidad producida de cada nivel y 
lo muestro en pantalla
--menciono el mercado al cual va dirigido cada producto

--tabulador de mercado
AA1 = Mercado premium
C15 = Mercado Estandar
D10 = Mercado Bajo
7 = No comerciable

acentuar palabras
á –> printf("%c",160);
é –> printf("%c",130);
í –> printf("%c",161);
ó –> printf("%c",162);
ú –> printf("%c",163);
*/
//libreria que permite indicar return EXIT_SUCCESS
#include <cstdlib>
#include<iostream>
#include<stdio.h>
//libreria cstdlib permite trabajar codigos de lenguajes para 
//aceptar acentos
#include"locale.h"
using namespace std;
int main()
{
	//especificamos que se puede escribir con acentos usando LC_CTYPE
	setlocale(LC_CTYPE, "Spanish");
	//region variables
	int nCremas=0, AA1 = 0, C15 = 0, D10 = 0, c7 = 0, codigoCalidad;
	//declaro una variable booleana para detectar si 
	//la maquina me indica que se detecto una nueva media
	//crema, si es detectada, me envia un 1 = true, si no 
	//es detectada, me envia un 0 = false
	bool sensorCrema = false;
	//fin region variables
	//pido a la maquina que me indique si tiene mas 
	//media crema
	//agrego una etiqueta para indicar al código, que a partir
	//de este espacio, se ejecuta las siguientes lineas 
	//una etiqueta es un nombre que se usa para marcar o fija una
	//posición dentro del código, para después indicar al código
	//que vaya a esta posición, también se le conoce como llamar a
	Crema:
	system("cls");
	cout<<"¿Se detecta media crema SI = 1 / NO = 2 "<<endl;
	cin>>sensorCrema;
	//
	if (sensorCrema == true)
	{
		nCremas++;
		cout<<"Se detecto la crema No. "<<nCremas<<endl;
		cout<<"Actualmente se manejan los siguientes niveles de calidad\n";
		cout<<"AA1 = Mercado premium = presione 1\n";
		cout<<"C15 = Mercado Estandar = presione 2\n";
		cout<<"D10 = Mercado Bajo = presione 3\n";
		cout<<"7 = No comerciable = presione 4\n";
		cout<<"¿Cuál es el código de calidad?: ";cin>>codigoCalidad;
		if (codigoCalidad == 1)
		{
			//****incremento mi variable que acumular este nivel
			AA1++;//incremento la existencia
			cout<<"nivel AA1 detectado\n";
			cout<<"Actualmente tiene "<<AA1<<" medias cremas en esta calidad\n";
			system("pause");
		}else if (codigoCalidad == 2)
		{
			//****incremento mi variable que acumular este nivel
			C15++;//incremento la existencia
			cout<<"nivel C15 detectado\n";
			cout<<"Actualmente tiene "<<C15<<" medias cremas en esta calidad\n";
			system("pause");
		}else if (codigoCalidad == 3)
		{
			//****incremento mi variable que acumular este nivel
			D10++;//incremento la existencia
			cout<<"nivel D10 detectado\n";
			cout<<"Actualmente tiene "<<D10<<" medias cremas en esta calidad\n";
			system("pause");
		}else if (codigoCalidad == 4)
		{
			//****incremento mi variable que acumular este nivel
			c7++;//incremento la existencia
			cout<<"nivel 7 detectado\n";
			cout<<"Actualmente tiene "<<c7<<" medias cremas en esta calidad\n";
			system("pause");
		}else
		{
			cout<<"El valor ingresado es equivocado, por favor utilice un valor de los niveles indicados\n";
			system("PAUSE");
		}
		goto Crema;
	}
	else
	{
		cout<<"Se puede ir a su casa\n";
		cout<<"Los resultados de producción son los siguientes"<<endl;
		cout<<"Medias Cremas Producidas = "<<nCremas<<endl;
		cout<<"Medias Cremas de Calidad AA1 = "<<AA1<<endl;
		cout<<"Medias Cremas de Calidad C15 = "<<C15<<endl;
		cout<<"Medias Cremas de Calidad D10 = "<<D10<<endl;
		cout<<"Medias Cremas de Calidad 7 = "<<c7<<endl;
		//con la palabra system, pueden usar cualquier comando
		//de la terminal de windows
		system("pause");
		//ejecuto otro proceso o mando otros mensajes
		system("cls");
		system("pause");
	}
	return 0;
}















