#pragma once
#include <vector>
#include <iostream>
class Polynom
{
private:
	std::vector<int> xArray;
public:
	Polynom();
	Polynom(int degree);
	void ConsoleShowPolynomBinary();
	Polynom operator+(Polynom b);
};

