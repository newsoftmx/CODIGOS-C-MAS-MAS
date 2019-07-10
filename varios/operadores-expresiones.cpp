#include<stdio.h>
//ahora utilizare COUT y CIN, por ello agrego la lireria iostream
#include "iostream"
/*repaso
un programa puede tener su funcion principal como int, void o simplemente main
*/
//añado namespace std para indicar que se maneje como un espacio estandar  de
//entradas y salidas de datos
using namespace std;
int main()
{
	//region variables
	int m = 45, n = 75, contador;
	int a=4,b=7,c;
	float n1=10,n2=15;
	//fin region variables
	printf("escribe el valor de c: ");
	scanf("%d", &c);
	
	//uso el operado *=
	b*=c;
	printf("Multiplica c * b y se guarda en b: %d\n", b);
	a*=c;
	printf("Multiplico a por c y se guarda en a: %d\n", a);
	a += b; 
	printf("Sumo a + b y lo guardo en a: %d\n", a);
	a-=c; 
	printf("Resto a - c y lo guardo en a: %d\n", a);
	n1/=n2; 
	printf("Divido n1 entre n2 y lo guardo en n1: %.4f\n", n1);
	a %= b;
	printf("Divide a entre b y guarda el residuo en a: %d\n", a);
	
	//incrementador y decrementador 
	printf( " m = %d, n = %d\n",m,n); 
	//incrementas m en 1, o el sumas 1
	++m; 
	//le restas 1 a la variable n
	--n; 
	printf( " m = %d, n = %d\n",m,n); 
	//ahora incremento m
	m++; 
	//ahora disminuyo n
	n--; 
	printf( " m = %d, n = %d\n",m,n);
	//ahora uso cout para dar salida a los datos, endl es un salto de línea
	cout<<"El valor de m se incrementa"<<endl;
	m++;
	cout<<++m;
	cout<<"Escribe el valor de contador, se incrementará 10 veces";cin>>contador;
	cout<<"Usted escribio el valor de: "<<contador;
	contador++;contador++;contador++;contador++;contador++;
	contador++;contador++;contador++;contador++;contador++;
	cout<<endl<<"El valor de contador despues de la suma es: "<<contador;
	
	return 0;
}
