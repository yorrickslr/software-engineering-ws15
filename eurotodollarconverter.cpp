#include "eurotodollarconverter.hpp"

EuroToDollarConverter::EuroToDollarConverter()
{
}

double EuroToDollarConverter::convert(double inValue) {
	return inValue / 10;
}

std::string EuroToDollarConverter::toString() {
	return "Euro to Dollar Converter";
}

void print() {
	std::cout << toString();
}