#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	char nota;
	cout << "Introduzca calificación (S, A, B, N, E) :";
	cin >> nota;
	switch (nota)
	{
		case 'E': cout << "Sobresaliente.";
			break;
		case 'N': cout << "Notable.";
			break;
		case 'B': cout << "Bien.";
			break;
		case 'A': cout << "Aprobado.";
			break;
		case 'S': cout << "Suspens.";
			break;
		default:
			cout << "no es posible esta nota";
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}
