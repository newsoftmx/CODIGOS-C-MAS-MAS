/*problema propuesto 5.1*/
#include <cstdlib>
#include<iostream>
#include<stdio.h>
#include"locale.h"
using namespace std;
int main()
{
	//variables locales
	int numero, maximo=0, minimo=0, nuevoMinimo=0;
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
			//verificamos si es mayor el numero
			if(numero>=maximo)
			{
				//nuevoMinimo=maximo;
				//al ser mayor, la variable maximo, toma el valor de numero
				maximo=numero;
			}
			else
			{
			/*al no ser mayor, pues es menor, entonces uso la variable nuevo Minimo para siempre conservar
			el valor minimo actual, y nunca perder este valor en los casos de que tenga un 3 y luego 
			capturen un 4, mi numero minimo sigue siendo 3*/	
				nuevoMinimo=numero;
				/*verifico si mi nuevo mninimo es menor que el minimo actual, esto para ver si fue caoturado
				un numero que sea menor al actual*/
				if(nuevoMinimo<minimo)
				{
					//al cumplirse, asigno a minimo el valor de nuevoMinimo
					minimo=nuevoMinimo;
				}
				else
				{
				/*como el nuevo numero no es menor al minimo actual, es decir, para el ejemplo donde tengo
				un 3 y capturan un 4, siendo el mayor un 6, sucede que el minimo sigue siendo el 3*/	
					if(minimo==0)//se usa cuando es detectado el primer valor minimo
					{
						minimo=nuevoMinimo;//solo sucede al capturarse el primer valor mínimo
					}
					/*ahora verifico si el minimo actual, es decir, 3 es menorque el nuevoMinimo 4, pues
					se asigne este 4 como nuevo valor, pero no pasa porque no es menor, y entonces
					aseguro que el valor minimo actual, se conserve y no se pierda*/
					else if(minimo>nuevoMinimo)
					{
					/*ingresa a esta condicion porque se ha detectado un nuevo numero minimo, es decir, supongamos
					que teniamos un 6 y 3, entonces el nuevo numero capturado es 1, por bvio el nuevoMinimo debe 
					ser 1, y lo detecto al cumplirse esta condición, donde mi valor minimo es es 3 y el nuevo es 1
					entonces el valor minimo es 1,por eso asigno el valor de nuevoMinimo a minimo*/	
						minimo=nuevoMinimo;	
					}
				}
				
				//cuando no se cumple ninguna de las anteriores, significa que estas ante un nuevo valor minimo
				//minimo=numero;
			}
		}
		//mostramos los valores máximo y mínimo
		cout<<"El valor máximo es: "<<maximo<<endl;
		cout<<"El valor mínimo es: "<<minimo<<endl;
		//ahora comienzo a verificar cual numero es mayor
		
	}while(numero>0);
	return 0;
}
