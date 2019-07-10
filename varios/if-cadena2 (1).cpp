#include <cstdlib>
#include<iostream>
#include<stdio.h>
#include <iostream>
#include <string>//al usar la librerio string, puedo declarar variables de este tipo
int main()
{
    using namespace std;
    string input1;//variable tipo string donde almacenaré los datos capturados
    string mes;
    /*cout << "Welcome to AgentOS V230.20043." << endl;
    cout << "To log in, please type \"log in\"" << endl;
    //el comando getline permite captura una cadena con espacios, 
    //sin limite de caracteres 
    getline(cin, input1);
    if (input1 == "log in")
    {
        cout << "Please enter your Agent ID." << endl;
    }*/
    system("cls");
    capturaMES:
	cout<<"Escribe el mes: ";
    getline(cin, mes);
    if(mes=="enero" || mes =="Enero" || mes=="ENERO")
    {
    	mes="01\n";
    	cout<<mes;
	}
	else if(mes=="febrero")
	{
		mes="02\n";
		cout<<mes;
	}
	else if(mes=="marzo")
	{
		mes="03\n";
		cout<<mes;
	}
	else
	{
		mes="Mes invalido, vuelve a capturar\n";
		cout<<mes;
	}
	goto capturaMES;
    return 0;
}
