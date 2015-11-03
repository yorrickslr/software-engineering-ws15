#include <inchtocentimeterconverter.hpp>

double InchToCentimetersConverter::convert(double inInch){
  return inInch*2.54;
}


std::string InchToCentimetersConverter::toString() const {
  return "Inch to Centimeter Converter";
}


void InchToCentimetersConverter::print() const {
  std::cout << toString();
}
