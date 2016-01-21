#include "inversion.hpp"

Inversion::Inversion()
{
}

Inversion::Inversion(CurrencyConverter* converter) {
  base_ = converter;
}

Inversion::Inversion(LengthConverter* converter) {
  base_ = converter;
}

Inversion::Inversion(Inversion* converter) {
  base_ = converter;
}

double Inversion::convert(double input) const {
  double tmp = base_->convert(1);
  return input / tmp;
}

std::string Inversion::toString() const {
  return fromUnit() + " to " + toUnit() + " Converter";
}

void Inversion::print() const {
  std::cout << toString();
}

std::string Inversion::fromUnit() const {
  return base_->toUnit();
}

std::string Inversion::toUnit() const {
  return base_->fromUnit();
}

UnitConverter* Inversion::clone() {
  return new Inversion;
}
