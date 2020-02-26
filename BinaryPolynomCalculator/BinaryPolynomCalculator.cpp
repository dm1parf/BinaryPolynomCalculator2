//Создать калькулятор для работы с вычислением двоичных полиномов 
//в полях галуа
//Запись полиномов осуществляется со СТАРШЕЙ степени
//x^5 + x = { 1 0 0 0 1 0 }
#include <iostream>
#include "polynom.h"

int main()
{
	Polynom poly;
	Polynom poly5 = Polynom(5);
	Polynom poly10 = Polynom(10);
	Polynom polyResult = poly10 + poly5;
	poly.ConsoleShowPolynomBinary();
	poly5.ConsoleShowPolynomBinary();
	polyResult.ConsoleShowPolynomBinary();


}

