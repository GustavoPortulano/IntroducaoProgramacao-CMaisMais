#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 24 de junho de 2025. Ter�a-feira
// Tarde fria

// Cap�tulo 3, p�gina 34: Dados l�gicos e compara��es

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	bool var1;
	var1 = true;
	bool var2;
	var2 = false;
	
	cout << "var1 = " << var1 << endl;
	cout << "var2 = " << var2 << endl;
	
	system("pause");
	
	return 0;
}
