#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*24 de junho de 2025.
/*Ter�a-feira, tarde fria*/

/*Cap�tulo 3, p�gina 31: Operadores de incremento e decremento.*/

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int x;
	x = 0;
	
	cout << "x = " << x++ << endl;
	cout << "x = " << x << endl;
	cout << "x = " << ++x << endl;
	cout << "x = " << x << endl;
	cout << "x = " << x-- << endl;
	cout << "x = " << x << endl;
	cout << "x = " << --x << endl;
	cout << "x = " << x << endl;
	
	return 0;
}
