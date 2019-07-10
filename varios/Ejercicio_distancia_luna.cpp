#include <stdio.h>
const int sueldo=1;
int main(){
	
	const int luna = 238857; /* Distancia en millas*/
	float luna_kilo;
	int a,b,c;
	printf("Distancia a la luna %d millas\n", luna);
	luna_kilo = luna*1.609; /*Una milla = 1.609 kilómetros */
	printf("En kilómetros es %.2fKm.\n", luna_kilo);	
	a=b=c=45;
	printf ("%d", c);
	return 0;
}
