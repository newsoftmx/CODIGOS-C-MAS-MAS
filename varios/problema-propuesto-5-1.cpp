/*problema propuesto 5.1*/
#include <cstdlib>
#include<iostream>
#include<stdio.h>
#include"locale.h"
using namespace std;
int main()
{
	//variables locales
	int numero, maximo=0, minimo=0;
	/*numero almacena wel numero que digita el usuario
	máximo, tendra el valor maximo actual
	minimo tendra el valor minimo actual
	*/
	do
	{
		cout<<"Escribe el valor de un numero, debe ser positivo, si desea terminar el programa, escriba 0: ";
		cin>>numero;
		//verifico si capturo un valor
		if(numero<0)
		{
			cout<<"Valor introducido es equivocado\n";
			numero=1;
		}
		else if(numero==0)
		{
			//acabar el programa
			cout<<"Ha decidido finalizar el programa\n";
		}
		else
		{
			cout<<"Valor capturado es valido\n";
			if(numero>=maximo)
			{
				//minimo=maximo;
				maximo=numero;
			}
			//con este else if buscamos que cuando escriba 1, este siempre sea mi valor mas bajo
			//y aseguro que si el nuevo valor es mas inferior que el actual minimo, entonces el nuevo valor
			//sea el minimo
			else if(minimo<numero )
			{
				minimo=minimo;
			}
			else{
				//cuando no se cumple ninguna de las anteriores, significa que estas ante un nuevo valor minimo
				minimo=numero;
			}
		}
		//mostramos los valores máximo y mínimo
		cout<<"El valor máximo es: "<<maximo<<endl;
		cout<<"El valor mínimo es: "<<minimo<<endl;
		//ahora comienzo a verificar cual numero es mayor
		
	}while(numero>0);
	return 0;
}
