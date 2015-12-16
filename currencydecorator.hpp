#ifndef CURRENCYDECORATOR_H
#define CURRENCYDECORATOR_H

#include "unitconverter.hpp"
#include "currencyconverter.hpp"

class CurrencyDecorator : virtual public UnitConverter {
public:
  CurrencyDecorator(CurrencyConverter* c_converter);
  CurrencyDecorator();
  ~CurrencyDecorator() {
    delete converter_;
  }

  virtual double convert(double inValue) const override;
  virtual std::string toString() const override;
  virtual void print() const override;
  virtual std::string fromUnit() const override;
  virtual std::string toUnit() const override;
  virtual UnitConverter* clone() override;


private:
  CurrencyConverter* converter_;
};



#endif