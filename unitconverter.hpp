#ifndef CONVERTER_H
#define CONVERTER_H

#include <iostream>
#include <string>

class UnitConverter;

class UnitConverter
{
  public:
    UnitConverter();
    virtual double convert(double inValue) const = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
    virtual std::string fromUnit() const = 0;
    virtual std::string toUnit() const = 0;
    virtual UnitConverter* clone() = 0;
  protected:
    UnitConverter* base_;
};

#endif // CONVERTER_H
