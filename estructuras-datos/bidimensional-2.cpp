#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	int num, i, ax, ay, x, y;
	cout<<"Por favor introduzca el tamaño del arreglo"<<endl;
	cout<<"Introduzca el primer valor x : ";cin>>ax;
	cout<<"Introduzca el segundo valor y : ";cin>>ay;
	//int matrix[500][400];
	int matriz[ay][ax];
	srand(time(NULL));
	for(y=0;y<=ay;y++){
		for(x=0;x<ax;x++){
			matriz[y][x]=rand()%1000+1;
		}
	}
	for(y=0;y<ay;y++){
		cout<<endl;//brinco de linea entre cada fila del arreglo
		for(x=0;x<ax;x++){
			cout<<matriz[y][x]<<"\t";
		}
	}
	return 0;
}
