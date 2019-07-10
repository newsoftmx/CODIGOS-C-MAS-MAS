#include <cstdlib>
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<cmath>
#include"locale.h"
using namespace std;
const int constante=1;
int main()
{
	int c = 0;
	float suma =0 ;
	int vmax;
	cout << "Cuantos terminos sumo de la serie ? ";
	cin >> vmax;
	for (;;) // bucle for que no termina nunca
	{
		if(c <= vmax) //test
		{
			c++; //incremento
			//suma+=1;
			//suma=suma+1/(float)(c*c);
			suma +=1/(float)(c*c);
			cout << c <<" "<< suma << endl;
		}
		else
			break;
	}
	system("PAUSE");
	return EXIT_SUCCESS;	
}
