#include "inchtocentimeterconverter.hpp"

InchToCentimetersConverter::InchToCentimetersConverter(){
  
}


double InchToCentimetersConverter::convert(double inInch) const {
  return inInch*2.54;
}


std::string InchToCentimetersConverter::toString() const {
  return "Inch to Centimeter Converter";
}


void InchToCentimetersConverter::print() const {
  std::cout << toString();
}

std::string InchToCentimetersConverter::fromUnit() const {
  return "Inch";
}

std::string InchToCentimetersConverter::toUnit() const {
  return "Centimeter";
}

UnitConverter* InchToCentimetersConverter::clone() {
  return new InchToCentimetersConverter;
}