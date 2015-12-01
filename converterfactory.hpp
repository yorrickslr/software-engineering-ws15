#ifndef CONVERTERFACTORY_H
#define CONVERTERFACTORY_H
#include "unitconverter.hpp"
#include <memory>





class ConverterFactory
{
public:
  static std::shared_ptr<ConverterFactory> instance()  {
    if (instance_ == nullptr)
    {
      ConverterFactory a;
      instance_ = make_shared<ConverterFactory>(a);
    }
  }

  static UnitConverter create(std::string const& converter_name) const{

  }

private:
  ConverterFactory();
  ~ConverterFactory();
  static std::shared_ptr<ConverterFactory> instance_;
};

std::shared_ptr<ConverterFactory> ConverterFactory::s_instance = NULL;

#endif
