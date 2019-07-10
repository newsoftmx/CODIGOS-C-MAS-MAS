#include <cstdlib>
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<cmath>
#include"locale.h"
using namespace std;
//variables globales
const int constante=1;
int ciclos=1;
//fin variables globales
int main()
{
	setlocale(LC_CTYPE, "Spanish");
	//variables locales
	bool proceso=0;
	int edad, numeroCostales, cExc, cAce, cBaj, cPes,cError;
	float pesoCostal;
	//fin variables locales
	while (proceso==false)
	{
		cExc=0;cAce=0;cBaj=0;cPes=0;cError=0;
		cout<<"Escribe tu edad: ";
		cin>>edad;
		if(edad>=32)//procesa costales
		{
			cout<<"Usted esta autorizado para usar el sistema en modo EXPERIMENTADO\n";
			cout<<"Capura el número de costales a procesar: ";cin>>numeroCostales;
			for(ciclos; ciclos<=numeroCostales;ciclos++)
			{
				cout<<"Procesando el costal número: "<<ciclos<<endl;
				cout<<"Captura el peso del costal, mínimo = 250 y máximo = 1000 : ";
				cin>>pesoCostal;system("cls");
				/******  RANGOS
				900 A 1000 ES EXCELENTE
				700 A 899 ES ACEPTABLE
				600 A 699 ES BAJO
				< A600 PESIMA    *****/
				if(pesoCostal>=900 && pesoCostal<=1000)
				{
					cExc++;
					cout<<"Este costal esta en la calidad de EXCELENTE\n";
					cout<<"Se han procesado un total de "<<ciclos<<" costales\n";
					cout<<"Faltan de procesar "<<numeroCostales-ciclos<<" costales\n";
				}else if(pesoCostal>=700 && pesoCostal<900){
					cAce++;
					cout<<"Este costal esta en la calidad de ACEPTABLE\n";
					cout<<"Se han procesado un total de "<<ciclos<<" costales\n";
					cout<<"Faltan de procesar "<<numeroCostales-ciclos<<" costales\n";
				}else if(pesoCostal>=600 && pesoCostal<700){
					cBaj++;
					cout<<"Este costal esta en la calidad de BAJA\n";
					cout<<"Se han procesado un total de "<<ciclos<<" costales\n";
					cout<<"Faltan de procesar "<<numeroCostales-ciclos<<" costales\n";
				}else if(pesoCostal>0 && pesoCostal<600){
					cPes++;
					cout<<"Este costal esta en la calidad de PESIMA\n";
					cout<<"Se han procesado un total de "<<ciclos<<" costales\n";
					cout<<"Faltan de procesar "<<numeroCostales-ciclos<<" costales\n";
				}else{
					cError++;
					cout<<"Se ha captura un valor incorrecto\n";
					cout<<"Se han procesado un total de "<<ciclos<<" costales\n";
					cout<<"Faltan de procesar "<<numeroCostales-ciclos<<" costales\n";
				}
				system("pause");system("cls");
			}
			cout<<"***************     **********************      ************************\n";
			cout<<"I N F O R M E\t F I N A L\t D E\t P R O D U C C I Ó N\t DE\t COSTALES\t\n";
			cout<<"Se procesaron "<<cExc<<" costales de NIVEL DE CALIDAD = EXCELENTE \n";
			cout<<"Se procesaron "<<cAce<<" costales de NIVEL DE CALIDAD = ACEPTABLE \n";
			cout<<"Se procesaron "<<cBaj<<" costales de NIVEL DE CALIDAD = BAJA \n";
			cout<<"Se procesaron "<<cPes<<" costales de NIVEL DE CALIDAD = PÉSIMA \n";
			cout<<"Se procesaron "<<cError<<" costales COMO ERROR \n";
			cout<<"Se procesaron un total de "<<numeroCostales<<" costales \n";
			cout<<"Hasta aquí el reporte Joaquin \n";
		}//fin if (edad>=32)
		else if(edad>=25){//contar las aves
		/*
		1. Preguntar el numero de jaulas que va a descargar del camión, guarde en variable
		2. preguntar cuantas aves vienen en cada jaula, guarde en variable
		3. Generar números aleatorios entre 1 y 3.5, esto será el peso de cada ánimal
		4., dberá realizar un proceso (ciclo) que se ejecute las mismas veces que la cantidad de jaulas
		5. Generar otro proceso (ciclo) que se ejute las mismas veces que la cantidad de aves por jaula
		6. Con lo anteior deberá realizar el proceso donde se inicie la descarga de cada jaula y al descargar 
		cada jaula, pues tendrá la misma cantidad de aves, y entonces se simula que estará sacando cada ave,
		por ello, cada ave deberá ser pesada, para esto debe usar el valor aleatorio, para simular que peso el ave
		y tras cada ave sacada de la jaula, se le asigna un valor aleatorio entre el rango indicado, y con base
		a este rango, debe realizar la siguiente clasificación, conteo y presentación de resultados
		
		CLASIFICACIOn
		peso de 1 a 1.7 kg, Calidad baja, proceso croquetas
		peso de 1.71 a 2.4, calidad media, proceso mercado
		peso de 2.4 a 3.0, calidad normal, proceso internacional
		peso de 3.1 a 3.1, Calidad fuera de rango, proceso Wings
		
		CONTEO
		Número de cajas descargadas, 
		Numero de aves descargadas
		Numero de aves en calidad baja
		Numero de aves en calidad baja
		Numero de aves en calidad normal
		Numero de aves en calidad fuera de rango
		
		Resultados, al finalizar este proceso de aves, debe mostrar los siguientes resultados
		Número de cajas descargadas, 
		Numero de aves descargadas
		Numero de aves en calidad baja
		Numero de aves en calidad baja
		Numero de aves en calidad normal
		Numero de aves en calidad fuera de rango
		
		*/
			
		}//fin if (edad>=25)
		else if(edad>=18){//cargar cajas
		/*
		ESTE PROCESO DEPENDE DE LA REALIZACIÓN DEL PROCESO DE AVES, CASO CONTRARIO NO TIENE CAJAS QUE CARGAR
		DEBE REALIZAR LO SIGUIENTE
		
		solicitar el código del empleado, hora inicio, fecha,
		realice un proceso en el cual pueda contabilizar las cajas que son limpiadas y cargadas en el camión, 
		es decir, el empleado, tomara la caja, la limpiará y después le realizar una prueba a la caja, 
		si la caja esta en buen estado, le indicará al sistema que esta correcta (true), si no pasa la
		prueba, le indicará al sistema que es incorrecto (false)
		Debe simular el proceso donde el empleado esta indicando si la caja esta correcta o no, para esto 
		puede utilizar valores aleatorio entre 0 y 1 y guardar estos valores en una variable booleana
		Debe realizar un ciclo que analice el total de cajas procesadas en las aves
		Cuando termine el proceso, debe informar lo siguiente
		Datos del empleado
		Numero total de cajas procesadas
		Numero total de cajas correctas
		Numero total de cajas incorrectas
		
		
		
		*/	
			
		}//fin if (edad>=18)
		else{
			cout<<"No tiene la edad para ejecutar el proceso\n";
		}//fin del if (edad ...)
		system("pause");system("cls");
		cout<<"Desea ejecutar de nuevo 1=NO   0=SI  : ";cin>>proceso;
		system("cls");
	}//fin del while (proceso==false)
}
