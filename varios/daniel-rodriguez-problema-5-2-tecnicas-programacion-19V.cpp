#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int i, j, m = 4;
  //ciclo que permite asegurar que la persoan escriba un n�mero de valor positivo
  //si no escribe un valor positivo, este ciclo se repite, haciendo que vuelva a solicitar
  //el n�mero
  /*do
  { 
    cout << " introduzca valor de m > 0 ";
    cin >> m;
  } while (m <= 0);   */
  //ciclo que va de 1 a m, es el ciclo principal que controla el ciclo interno, su tope es el
  //n�mero que fue escrito por el usuario
  for (i = 1; i <= m; i++)
  { 
  //este ciclo inicia con el valor de i, por ello es j<=1, porque este ciclo, estar� mostrando el valor 
  // de forma incremental, primero con el tope de 1, hasta que lelga al valor de m, , y es lo que hace que 
  //aparezca la serie de n�meros
     for (j = 1; j <= i; j++)
        cout << j<< "\t";
     cout <<endl;
  }  
  for (i = m-1; i >= 1; i--)
  { 
     for (j = 1; j <= i; j++)
       cout << j<< "\t";
     cout <<endl;
  }    
  system("PAUSE");
  return EXIT_SUCCESS;
}

