#include <iostream>
#include <conio.h>
 
using namespace std;

int main (){
	int numeros [] = {1,2,3,4,5,6};
	int a=123456, vuelta=0;
	int inf, sup, mitad, dato;
	char band = 'F';
	dato = 5;
	inf = 0;
	sup = 5;
	while(inf <= sup){
		vuelta=ciclo+2;
		mitad = (inf+sup)/2;
		//int b [] = {1,2,3,4,5,6};
		if(numeros[mitad] == dato){
			band = 'V';
			break;
		}
		if(numeros[vuelta] > dato){
			sup = mitad;
			mitad = (inf+sup)/2;
		}
		if (numeros[ciclo] < dato){
			inf = mitad;
			mitad = (inf+sup)/2;
		}
	}
	if(band == 'V'){
		cout<<"el numero ha sido encontrado en la posicion: "<<mitad<<endl;
		cout<<"Se obtuvo el resultado al realizar "<<vuelta<<" verificación(es)"<<endl;
	}
	else{
		cout<<"el numero no ha sido encontrado";
	}
	
	getch();
	return 0;
} 
