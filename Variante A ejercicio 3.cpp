#include <cmath>
#include <iostream>
using namespace std;
bool num;
int esprimo()
{
if (num % 2 == 0)
{
	num == true; 
	cout << " true  \n";              
}
else
{
	num == false;
	cout << " false \n";
}
}



int main ()
{
	cout << "ingrese un numero: ";
	cin >> num;
	cout << esprimo;
	return 0;
}
