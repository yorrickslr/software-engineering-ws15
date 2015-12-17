#include "inchtocentimeterconverter.hpp"

InchToCentimeterConverter::InchToCentimeterConverter()
{
}

InchToCentimeterConverter::InchToCentimeterConverter(LengthConverter* converter) {
  base_ = converter;
}

InchToCentimeterConverter::InchToCentimeterConverter(Inversion* converter) {
  base_ = converter;
}

double InchToCentimeterConverter::convert(double inInch) const {
  if(base_)
    inInch = base_->convert(inInch);
  return inInch*2.54;
}


std::string InchToCentimeterConverter::toString() const {
  return fromUnit() + " to Centimeter Converter";
}


void InchToCentimeterConverter::print() const {
  std::cout << toString();
}

std::string InchToCentimeterConverter::fromUnit() const {
  if(base_)
    return base_->fromUnit();
  return "Inch";
}

std::string InchToCentimeterConverter::toUnit() const {
  return "Centimeter";
}

UnitConverter* InchToCentimeterConverter::clone() {
  return new InchToCentimeterConverter;
}
