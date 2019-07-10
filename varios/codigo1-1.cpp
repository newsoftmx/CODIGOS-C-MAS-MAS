#include "stdio.h"
int main()
{
	//region variables
	//una variabale puede ser declara, inicializada
	int existencia;//****
	//unsigned es una variable entera sin signo, elimina el signo del valor
	unsigned int edad;//****
	//char permite usar una variable que acepte solo un caracter
	//declaro mi variable nombre para almacenarla como tipo char
	//pero este char es un arreglo, es decir, un conjunto de
	//caracteres
	char nombre[20], apePaterno[20], apeMaterno[20], estudia;//toda variable con corchetes es un array
	//shor permite usar un numero corto
	short int nivel;//**
	//float permite almacenar numeros con decimales en una variable 
	float estatura, peso, calificacion;//***
	//double permite almacenar numeros enteros o decimales que sean
	//mas grandes, ejemplo el numero de telefono no se puede guardar
	//en tipo int
	double telefono, saldo;//****
	long int n1;//***
	long double bitcoins;//***
	//endregion variables
	printf("Hola mundo \n\n");
	
	//primero voy a pedir al usuario que escriba los 
	//valores de las variables para después imprimirlas
	printf("Escribe tu nombre: ");
	gets(nombre);
	printf ("Escribe tu apellido paterno: ");
	gets(apePaterno);
	printf("Escribe tu apellido materno: ");
	gets(apeMaterno);
	printf("Si estudia escriba S, caso contrario escriba N: ");
	scanf("%s", &estudia);
	printf("Escribe un numero para tratarse como long int ");
	scanf("%Lf", &n1);
	//aquí comienzo la impresión de datos
	printf("Estimado usuario: %s %s %s, deseamos que tengas un buen día\n", nombre, apePaterno, apeMaterno);
	printf("usted tiene un peso de %f,\n", peso); 
	printf(" y una estatura de: %.2f,\n", estatura);
	printf("Tu nivel de ingles %d\n", nivel);
	printf("Con una calificacion de %f\n", calificacion);
	printf("su telefono es %lf\n", telefono);
	printf("actualmente tiene un saldo de %lf dolares\n", saldo);
	printf("ademas tiene %lf bitcoins\n", bitcoins);
	printf("su estatus de estudio es %c\n", estudia);
	printf("la existencia de latas de frijoles es: %d\n", existencia);
	printf("Esta es la impresion de un numero long int %lf\n", n1);
	
	return 0;
}
