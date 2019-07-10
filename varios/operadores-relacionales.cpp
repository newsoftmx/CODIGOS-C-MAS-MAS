#include "iostream";
using namespace std;
int main()
{
	//region de variables locales
	int diasTrabajados, ine, estatusLaboral;
	char nombre[25], apePaterno[25], apeMaterno[25];
	float sueldoMensual, sueldo;
	//fin region variables locales
	cout<<"Bienvenido a los operadores relacionales";
	cout<<"Nombre: "; gets(nombre);
	cout<<"Apellido paterno: ";gets(apePaterno);
	cout<<"Apellido materno: ";gets(apeMaterno);
	cout<<"Sueldo: ";cin>>sueldo;
	cout<<"Días trabajados: ";cin>>diasTrabajados;
	cout<<"INE: ";cin>>ine;
	cout<<"Estatus laboral (1 = ocupado / cualquier numero = libre): ";
	cin>>estatusLaboral;
	//operador relacional ==
	//usamos if para verificar si cumple el valor, 
	//if es una estructura selectiva
	if(diasTrabajados == 6)
	{
		cout<<"Felcidades, fuiste responsable\n";
	}
	else
	{
		cout<<"Estas despedido\n";
	}
	if(estatusLaboral == 1)
	{
		cout<<"felicidades por trabajar\n";
	}else{
		cout<<"Desempleado\n";
	}
	cout<<"ahora verifico que las dos condiciones se cumplan"<<endl;
	if(diasTrabajados == 6 && estatusLaboral == 1)
	{
		cout<<"Es posible realizar la nomina"<<endl;
	}
	else{
		cout<<"No se puede realizar la nomina"<<endl;
	}
	if (sueldo>=3000 || ine!=0)
	{
		cout<<"Recibiras bono"<<endl;
		/*ahora determinamos el sueldoMensual, usando los operadores
		aritmeticos, el sueldoMensual = diasTrabajados * 550, esto le 
		sumará al bono de 600 pesos, multiplicarlo por el 30%,
		y al anterior total debe obtener el 12% y este debe ser restado
		al sueldoMensual para obtener el sueldoMensual*/
		sueldoMensual = ((diasTrabajados * sueldo) + 600) * 1.3;
		sueldoMensual = sueldoMensual - (sueldoMensual * .12);
		cout<<"Su sueldo mensual es: "<<sueldoMensual<<endl;
	}
	else{
		cout<<"Recibes pago normal";		
	}
	return 0;	
	
	
}
