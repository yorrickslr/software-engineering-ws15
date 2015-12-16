#include "lengthdecorator.hpp"

LengthDecorator::LengthDecorator(LengthConverter* l_converter) : 
    converter_{l_converter} {}

LengthDecorator::LengthDecorator()
{
}

double LengthDecorator::convert(double inValue) const {
  return converter_->convert(inValue);
}

std::string LengthDecorator::toString() const {
  return converter_->toString();
}

void LengthDecorator::print() const {
  converter_->print();
}

std::string LengthDecorator::fromUnit() const {
  return converter_->fromUnit();
}

std::string LengthDecorator::toUnit() const {
  return converter_->toUnit();
}

UnitConverter* LengthDecorator::clone() {
  return converter_->clone();
}
