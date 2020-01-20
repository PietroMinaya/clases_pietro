//Clase 1 Lucas
#include "Calculadora1.hpp"
int main() {
	CCalculadora *casio = new CCalculadora(20, 10);
	casio->resultado();
	while (true)
	{
		int a, b;
		cin >> a >> b;
		casio->setNumero1(a);
		casio->setNumero2(b);
		casio->resultado();
	}
	system("pause>0");
}