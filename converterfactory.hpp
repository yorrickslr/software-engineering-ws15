#ifndef CONVERTERFACTORY_H
#define CONVERTERFACTORY_H
#include "dollartoeuroconverter.hpp"
#include "eurotodollarconverter.hpp"
#include "dollartoyenconverter.hpp"

#include "miletometerconverter.hpp"
#include "yardtometerconverter.hpp"
#include "inchtocentimeterconverter.hpp"
 
#include "celsiustofahrenheitconverter.hpp"
#include "fahrenheittocelsiusconverter.hpp"
#include "celsiustokelvinconverter.hpp"

#include <memory>
#include <map>



ConverterFactory* ConverterFactory::s_instance = NULL;


class ConverterFactory
{
public:
  static ConverterFactory* instance()  {
    if (instance_ == nullptr)
    {
      instance_ = new ConverterFactory{};
    }
  }

  static UnitConverter* create(std::string const& converter_name) const{
    return prototypes_[converter_name]->clone();
  }
  static ConverterFactory* instance_;


private:
  ConverterFactory() : 
    prototypes_{
      {"Celsius to Fahrenheit Converter", new CelsiusToFahrenheitConverter},
      {"Fahrenheit to Celsius Converter", new FahrenheitToCelsiusConverter},
      {"Celsius to Kelvin Converter", new CelsiusToKelvinConverter},
      {"Dollar to Euro Converter", new DollarToEuroConverter},
      {"Euro to Dollar Converter", new EuroToDollarConverter},
      {"Dollar to Yen Converter", new DollarToYenConverter},
      {"Inch to Centimeter Converter", new InchToCentimeterConverter},
      {"Yard to Meter Converter", new YardToMeterConverter},
      {"Miles to Meter Converter", new MilesToMeterConverter}
    }
  ~ConverterFactory();
  static std::map<std::string,UnitConverter*> prototypes_;
};




#endif
