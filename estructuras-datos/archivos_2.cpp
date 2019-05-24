#include <stdio.h>
#include <iostream>
using namespace std;
main()
{
	FILE* examen; /* ptrCf = apuntador al archivo clientes.dat */
	/* fopen abre el archivo. Si no es capaz de crear el archivo, sale del
	programa */
	int ciclo=1, numeroClientes,cuenta;
	char nombre[ 30 ], direccion[30], telefono[10], registro[70]; /* nombre de cuenta */
	double saldo;
	char* cadena;
	string nombreCliente, direccionCliente, telefonoCliente, registroCliente;
	
	cout<<"Sistema para captura de saldos de los clientes\n";
	cout<<"Captura el numero de clientes que desea registrar sus saldo: ";
	cin>>numeroClientes;
	
	//if ( ( examen = fopen( "clientes.dat", "w" ) ) == NULL )
	//tambien puede ser un archivo csv para usarse en la importación de datos
	if ( ( examen = fopen( "clientes.csv", "w" ) ) == NULL ) {
		//printf ( "El archivo no pudo abrirse\n" );
		//cout << "hola";
		cout << " No se pudo crear el archivo ";
	}
	else
	{
		//printf ("Todo bien");
		//hacemos un ciclo que permita capturar los datos que se guardaran en el archivo
		while (ciclo<=numeroClientes){
			cout<<"Por favor capture los datos del cliente No. "<<ciclo<<"\n";
			cout<<"Escribe el nombre: ";
			cin>>nombreCliente;
			cout<<"\n";
			cout<<"Escribe la dirección: ";
			cin>>direccionCliente;
			cout<<"\n";
			cout<<"Escribe el número de télefono: ";
			cin>>telefonoCliente;
			cout<<"\n";
			//concateno/uno los datos de los string para que sean uno solo en un campo
			registroCliente = nombreCliente + ", " + direccionCliente + ", " + telefonoCliente + "\n";
			//convierto mi string registroCliente a una cadena para poder insertarla en el archivo
			cadena=(char *)registroCliente.c_str();
			fputs(cadena, examen);
			ciclo++;
		}
		//nunca olvidar cerrar el ciclo
		fclose(examen);
		cout << "todobien";
	}/* fin de if */
	
	//return 0;
}
