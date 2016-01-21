#ifndef COMMAND_H
#define COMMAND_H

#include "dollartoeuroconverter.hpp"
#include "eurotodollarconverter.hpp"
#include "dollartoyenconverter.hpp"

#include "miletometerconverter.hpp"
#include "yardtometerconverter.hpp"
#include "inchtocentimeterconverter.hpp"
 
#include "celsiustofahrenheitconverter.hpp"
#include "fahrenheittocelsiusconverter.hpp"
#include "celsiustokelvinconverter.hpp"

class Command
{
public:
  typedef double (UnitConverter:: *Method) (double) const;
  Command(UnitConverter* target, Method meth, double param) :
    converter_{target},
    method_{meth},
    conv_param{param} {}

  double execute() {
    return (converter_->*method_) (conv_param);
  }

  void print_conv() {
    converter_->print();
  }

  void print_val() {
    std::cout << conv_param << " ";
  }

private:
  UnitConverter* converter_;
  Method method_;
  double conv_param;
};


#endif
