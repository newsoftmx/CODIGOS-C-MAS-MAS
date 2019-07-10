#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	char nota[3];
	cout << "Introduzca calificación (SSS, AAA, BBB, NNN, EEE) :";
	cin >> nota;
	switch (nota[3])
	{
		case 'EEE': cout << "Sobresaliente.";
			break;
		case 'NNN': cout << "Notable.";
			break;
		case 'BBB': cout << "Bien.";
			break;
		case 'AAA': cout << "Aprobado.";
			break;
		case 'SSS': cout << "Suspens.";
			break;
		default:
			cout << "no es posible esta nota";
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}
