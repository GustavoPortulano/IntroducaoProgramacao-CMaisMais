#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*24 de junho de 2025*/
/*Ter�a-feira, noite fria*/

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int numero1;
	int numero2; 
	int r;
	
	cout << "Digite o primeiro n�mero: ";
	cin >> numero1;
	cout << "Digite o segundo n�mero: ";
	cin >> numero2;
	
	r = numero1 + numero2;
	cout << "Adi��o dos n�meros = " << r << endl;
	
	r = numero1 - numero2;
	cout << "Subtra��o dos n�meros = " << r << endl;
	
	r = numero1 * numero2;
	cout << "Multiplica��o dos n�meros: " << r << endl;
	
	r = numero1 / numero2;
	cout << "Divis�o dos n�meros = " << r << endl;
	
	r = numero1 % numero2;
	cout << "Resto da divis�o = " << r << endl;
	
	system("pause");
	
	return 0;
}
