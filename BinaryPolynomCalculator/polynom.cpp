#include "polynom.h"

Polynom::Polynom()
{
	xArray = { 1 };
}

Polynom::Polynom(int degree)
{
	xArray = { 1 };
	xArray.reserve(degree + 1);
	for (int i = 0; i < degree; i++) {
		xArray.push_back(0);
	}
}

void Polynom::ConsoleShowPolynomBinary()
{
	std::cout << std::endl << "array:" << std::endl;
	for (auto i = xArray.begin(); i != xArray.end(); ++i) {
		std::cout << " " << *i;
	}
}

Polynom Polynom::operator+(Polynom b)
{
	int resultSize;
	Polynom result = Polynom(this->xArray.size() > b.xArray.size() ? this->xArray.size() - 1 : b.xArray.size() - 1);
	return result;
}


