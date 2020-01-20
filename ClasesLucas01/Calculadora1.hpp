#pragma once
#include <iostream>
using namespace std;

class CCalculadora
{
private:
	//atributo = variable
	//metodo = funcion
	int numero1;
	int numero2;
	int suma();
	int resta() {
		return this->numero1 - this->numero2;
	}
	int multiplicacion() {
		return this->numero1 * this->numero2;
	}
	int division() {
		return this->numero1 / this->numero2;
	}
public:
	CCalculadora(int, int); //constructor
	~CCalculadora(); //destructor
	void resultado() {
		cout << "Suma: " << this->suma() << endl;
		cout << "Resta: " << this->resta() << endl;
		cout << "Multi: " << this->multiplicacion() << endl;
		cout << "Divi: " << this->division() << endl;
	}
	int getNumero1() {
		return numero1;
	}
	int getNumero2() {
		return numero2;
	}
	void setNumero1(int numero1) {
		this->numero1 = numero1;
	}
	void setNumero2(int numero2) {
		this->numero2 = numero2;
	}
};

