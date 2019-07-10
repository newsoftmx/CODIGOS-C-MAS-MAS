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
	float n;
	cout << "n raiz(n)" << endl;
	for (n = 16; n >= 1 ; n = n - 2.5)
		cout << n << '\t' << sqrt (n) << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}

