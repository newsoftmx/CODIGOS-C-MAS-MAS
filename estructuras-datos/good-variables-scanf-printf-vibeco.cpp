#include<iostream>
#include<stdio.h>
#include<stdlib.h>
//la libreria string permite trabajar con variables String
/*#include<string>

#
#include<windows.h>
#include<conio.h>*/

using namespace std;
//cuerpo/función principal
int main()
{
	//declaro mis variables
	int varEntera;
	float varFlotante;
	//ver página 188 cap. 6
	char varChar[25];//esta variable aceptará espacios
	char varCharSinTamano[]="La musica es de lo mejor";//ya tiene valores definidos
	char varChar1[5], varChar2[8];
	bool varBooleana;
	//inicializo mis variables
	varEntera=10;
	varFlotante=45.63;
	/*las siguientes asignaciones de valores no son validad
	porque los valores char, solo se puede al inicio o en
	captura de datos recibida por el usuario del aplicativo*/
	//varChar="Super-mega-excelente";
	//varCharSinTamano="Hola"
	//varchar1="123456";
	//varchar2="123456789";
	varBooleana=false;
	//ahora muestro todos los datos
	printf("Valor de variable entera es: %d\n",varEntera);
	/* el valor .2f indica solo 2 decimales*/
	printf("Valor de variable flotante es: %.2f\n",varFlotante);
	printf("Valor de variable cadena varChar es: %s\n",varChar);
	printf("Valor de variable cadena varCharSinTamano es: %s\n",varCharSinTamano);
	printf("Valor de variable cadena varChar1 %s\n",varChar1);
	printf("Valor de variable cadena varChar2 %s\n",varChar2);
	printf("Valor de variable booleana %d\n",varBooleana);
	
	/*ahora capturo un valor para cada variable*/
	printf("Introduce el valor de la variable entera: ");
	scanf("%d", &varEntera);
	printf("Introduce el valor de la variable flotante: ");
	scanf("%f", &varFlotante);
	printf("Introduce el valor de la variable varChar[25]: ");
	gets(varChar);
	printf("Introduce el valor de la variable varCharSinTamano: ");
	scanf("%s", &varCharSinTamano);
	printf("Introduce el valor de la variable varChar1: ");
	scanf("%s", &varChar1);
	printf("Introduce el valor de la variable varChar2: ");
	scanf("%s", &varChar2);
	printf("Introduce el valor de la variable varBooleana: ");
	scanf("%d", &varBooleana);
	
	//ahora vuelvo a mostrar todos los datos
	printf("Valor de variable entera es: %d\n",varEntera);
	/* el valor .2f indica solo 2 decimales*/
	printf("Valor de variable flotante es: %.2f\n",varFlotante);
	printf("Valor de variable cadena varChar es: %s\n",varChar);
	printf("Valor de variable cadena varCharSinTamano es: %s\n",varCharSinTamano);
	printf("Valor de variable cadena varChar1 %s\n",varChar1);
	printf("Valor de variable cadena varChar2 %s\n",varChar2);
	printf("Valor de variable booleana %d\n",varBooleana);
	/*regresamos un 0 par aindicar que no hubo errores
	*al probar el código*/
	return 0;//indica terminación exitosa
	
}
