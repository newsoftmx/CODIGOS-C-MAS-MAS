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
			
		}//fin if (edad>=25)
		else if(edad>=18){//cargar cajas
			
		}//fin if (edad>=18)
		else{
			cout<<"No tiene la edad para ejecutar el proceso\n";
		}//fin del if (edad ...)
		system("pause");system("cls");
		cout<<"Desea ejecutar de nuevo 1=NO   0=SI  : ";cin>>proceso;
		system("cls");
	}//fin del while (proceso==false)
}
