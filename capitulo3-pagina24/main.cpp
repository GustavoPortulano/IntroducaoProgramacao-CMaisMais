#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*24 de junho de 2025*/
/*Ter�a-feira, dia frio*/

/*Cap�tulo 3. P�gina 24. Altera��es poss�veis.*/

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	double numero1, numero2, soma;
	cout << "Digite o primeiro n�mero: ";
	cin >> numero1;
	cout << "Digite o segundo n�mero: ";
	cin >> numero2;
	soma = numero1 + numero2;
	cout << "A soma dos numeros � " << soma << endl;
	
	system("pause");
	
	return 0;
}
