#include <cstdlib>
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include"locale.h"
using namespace std;
const int constante=1;
int main()
{
	setlocale(LC_CTYPE, "Spanish");
	cout << "n n*n n*n*n" << endl;
	for (int n = 1; n <= 500; n++)
		cout << n << '\t' << n * n << '\t' << n * n* n <<endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
