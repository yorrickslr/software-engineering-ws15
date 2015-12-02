#include "inchtocentimeterconverter.hpp"

InchToCentimeterConverter::InchToCentimeterConverter(){
  
}


double InchToCentimeterConverter::convert(double inInch) const {
  return inInch*2.54;
}


std::string InchToCentimeterConverter::toString() const {
  return "Inch to Centimeter Converter";
}


void InchToCentimeterConverter::print() const {
  std::cout << toString();
}

std::string InchToCentimeterConverter::fromUnit() const {
  return "Inch";
}

std::string InchToCentimeterConverter::toUnit() const {
  return "Centimeter";
}

UnitConverter* InchToCentimeterConverter::clone() {
  return new InchToCentimeterConverter;
}
