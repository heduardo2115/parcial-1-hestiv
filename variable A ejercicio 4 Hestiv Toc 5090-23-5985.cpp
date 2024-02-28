#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	int numero, raiz;
	cout << "ingrese un numero para calcular su raiz: ";
	cin >> numero;
	
	raiz = sqrt(numero);
	cout<<"la raiz del numero es: " << raiz << endl;
	
	return 0;
}