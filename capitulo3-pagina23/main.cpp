#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*24 de junho de 2025*/
/*Ter�a-feira. Dia frio. 00h11m*/

/*Cap�tulo 3. P�gina 23. Fluxo de entrada*/

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	double numero1;
	double numero2;
	double soma;
	cout << "Digite o primeior n�mero: ";
	cin >> numero1;
	cout << "Digite o segundo n�mero: ";
	cin >> numero2;
	soma = numero1 + numero2;
	cout << "A soma dos numeros � " << soma << endl;
	
	system("pause");
	
	return 0;
}
