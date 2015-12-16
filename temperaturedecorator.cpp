#include "temperaturedecorator.hpp"

TemperatureDecorator::TemperatureDecorator(TemperatureConverter* t_converter) : 
    converter_{t_converter} {}

TemperatureDecorator::TemperatureDecorator()
{
}

double TemperatureDecorator::convert(double inValue) const {
  return converter_->convert(inValue);
}

std::string TemperatureDecorator::toString() const {
  return converter_->toString();
}

void TemperatureDecorator::print() const {
  converter_->print();
}

std::string TemperatureDecorator::fromUnit() const {
  return converter_->fromUnit();
}

std::string TemperatureDecorator::toUnit() const {
  return converter_->toUnit();
}

UnitConverter* TemperatureDecorator::clone() {
  return converter_->clone();
}
