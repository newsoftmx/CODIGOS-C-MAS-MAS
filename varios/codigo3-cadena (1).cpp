#include<stdio.h>
/* la libreria string.h permite
manejar cadenas en los códigos
¿qué es una cadenaen programación?
R= Conjunto de caracteres alfanumericos
alfanumericos = Letras, numeros, simbolos
es decir, una cadena puede ser cualquier simbolo ASCII
*/
#include<string.h>
//declaro mi variableglobal
int edad = 15, numeroHijos, numeroTaxiEnLagos;
int main()
{
	//declaro mi variable
	//de forma local
	int edadAlumno = 18, cantidadPerros;
	//declaro variable tipo char, para almacenar
	//la cadena que quiero guardar, la variable
	//char solo acepta un caracter, pero para que
	//pueda aceptar mas, la declaro como tipo
	//arreglo, para esto uso un []
	//NOTA: dentro delcorchete va el numero de 
	//caracteres a soportar
	char mensaje[50] = "Alumnos acreditados\n\n\n";
	printf(mensaje);
	/*strcpy es la abreviatura de copiar cadena o
	en ingles string copy, y lo que hace es copiar
	toda una cadena dentro de una variable
	se usa escribiendo primero la variable y 
	entre comillas la cadena a asignar*/
	strcpy(mensaje, "Daniel\n");
	printf(mensaje ,"\n\n");
	printf("La edad del alumno es %d", edadAlumno);
	//si mi programa ejecuta todas las lineas que 
	//estan antes de el return, significa que se
	//ejecuto perfectamente, y entonces le indico
	//que regrese un valor 0, lo cual significa que 
	//mi codigo se ejecuto sin errores, CHANGOS
	//entonces cuando se ejecuta un error, me 
	//mostrará en pantalla un numero distinto a 0
	
	/*para leer un valor o permitir al usuario que
	escriba un valor, simplemente debo usar scanf
	y su comodin delectura*/
	/*leemos la variable local cantidadPerros*/
	printf("\n\nEscriba la cantidad de perros que viven con usted: ");
	scanf("%d", &cantidadPerros);
	printf("Los perros que viven con usted son: %d ", cantidadPerros);
	/*en 5 minutos, pide al usuario que capture el número de hijos y
	numero de taxis en la ciudad de Lagos de Moreno*/
	return 0;
}

