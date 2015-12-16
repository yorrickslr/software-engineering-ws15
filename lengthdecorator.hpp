#ifndef LENGTHDECORATOR_H
#define LENGTHDECORATOR_H

#include "unitconverter.hpp"
#include "lengthconverter.hpp"

class LengthDecorator : virtual public UnitConverter {
public:
  LengthDecorator(LengthConverter* l_converter);
  LengthDecorator();
  ~LengthDecorator() {
    delete converter_;
  }

  virtual double convert(double inValue) const override;
  virtual std::string toString() const override;
  virtual void print() const override;
  virtual std::string fromUnit() const override;
  virtual std::string toUnit() const override;
  virtual UnitConverter* clone() override;


private:
  LengthConverter* converter_;
};



#endif