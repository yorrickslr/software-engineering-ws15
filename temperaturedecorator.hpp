#ifndef TEMPERATUREDECORATOR_H
#define TEMPERATUREDECORATOR_H

#include "unitconverter.hpp"
#include "temperatureconverter.hpp"

class TemperatureDecorator : virtual public UnitConverter {
public:
  TemperatureDecorator(TemperatureConverter* t_converter);
  TemperatureDecorator();
  ~TemperatureDecorator() {
    delete converter_;
  }

  double convert(double inValue) const override;
  std::string toString() const override;
  void print() const override;
  std::string fromUnit() const override;
  std::string toUnit() const override;
  UnitConverter* clone() override;


private:
  TemperatureConverter* converter_;
};



#endif