#include "Calculadora1.hpp"

CCalculadora::CCalculadora(int numero1, int numero2)
{
	this->numero1 = numero1;
	this->numero2 = numero2;
}
int CCalculadora::suma() { return this->numero1 + this->numero2; }


CCalculadora::~CCalculadora()
{

}
