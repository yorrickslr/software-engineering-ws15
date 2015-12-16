#include "currencydecorator.hpp"

CurrencyDecorator::CurrencyDecorator(CurrencyConverter* c_converter) : 
  converter_{c_converter} 
{
  std::cout << converter_->toString() << std::endl;
}

CurrencyDecorator::CurrencyDecorator()
{
}

double CurrencyDecorator::convert(double inValue) const {
  return converter_->convert(inValue);
}

std::string CurrencyDecorator::toString() const {
  return converter_->toString();
}

void CurrencyDecorator::print() const {
  converter_->print();
}

std::string CurrencyDecorator::fromUnit() const {
  return converter_->fromUnit();
}

std::string CurrencyDecorator::toUnit() const {
  return converter_->toUnit();
}

UnitConverter* CurrencyDecorator::clone() {
  return converter_->clone();
}
