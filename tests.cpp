// Copyright 2015: DreadNoize, yorrickslr

#include "tinytest.h"

// CurrencyConverter

int EuroToDollar1() {
  EuroToDollarConverter converter;
  TINYTEST_EQUAL_EPSILON(0.0,converter.convert(0.0));
  return 1;
}
int EuroToDollar2() {
  EuroToDollarConverter converter;
  TINYTEST_EQUAL_EPSILON(-1.102796,converter.convert(-1.0));
  return 1;
}
int EuroToDollar3() {
  EuroToDollarConverter converter;
  TINYTEST_EQUAL_EPSILON(46.317433,converter.convert(42.0));
  return 1;
}

int DollarToEuro1() {
  DollarToEuroConverter converter;
  TINYTEST_EQUAL_EPSILON(0.0,converter.convert(0.0));
  return 1;
}
int DollarToEuro2() {
  DollarToEuroConverter converter;
  TINYTEST_EQUAL_EPSILON(-0.906786,converter.convert(-1.0));
  return 1;
}
int DollarToEuro3() {
  DollarToEuroConverter converter;
  TINYTEST_EQUAL_EPSILON(38.085012,converter.convert(42.0));
  return 1;
}

int DollarToYen1() {
  DollarToYenConverter converter;
  TINYTEST_EQUAL_EPSILON(0.0,converter.convert(0.0));
  return 1;
}
int DollarToYen2() {
  DollarToYenConverter converter;
  TINYTEST_EQUAL_EPSILON(-120.744501,converter.convert(-1.0)); //control
  return 1;
}
int DollarToYen3() {
  DollarToYenConverter converter;
  TINYTEST_EQUAL_EPSILON(5071.269042,converter.convert(42.0)); //control
  return 1;
}

// LengthConverter

int MilesToMeters1() {
  MilesToMetersConverter converter;
  TINYTEST_EQUAL_EPSILON(0.0,converter.convert(0.0));
  return 1;
}
int MilesToMeters2() {
  MilesToMetersConverter converter;
  TINYTEST_EQUAL_EPSILON(-1609.344,converter.convert(-1.0));
  return 1;
}
int MilesToMeters3() {
  MilesToMetersConverter converter;
  TINYTEST_EQUAL_EPSILON(21130.68672,converter.convert(13.13));
  return 1;
}

int YardsToMeters1() {
  YardsToMetersConverter converter;
  TINYTEST_EQUAL_EPSILON(0.0,converter.convert(0.0));
  return 1;
}
int YardsToMeters2() {
  YardsToMetersConverter converter;
  TINYTEST_EQUAL_EPSILON(-0.9144,converter.convert(-1.0));
  return 1;
}
int YardsToMeters3() {
  YardsToMetersConverter converter;
  TINYTEST_EQUAL_EPSILON(609.5993904000001,converter.convert(666.666));
  return 1;
}

int InchesToCentimeter1() {
  InchesToCentimeterConverter converter;
  TINYTEST_EQUAL_EPSILON(0.0,converter.convert(0.0));
  return 1;
}
int InchesToCentimeter2() {
  InchesToCentimeterConverter converter;
  TINYTEST_EQUAL_EPSILON(-2.54,converter.convert(-1.0));
  return 1;
}
int InchesToCentimeter3() {
  InchesToCentimeterConverter converter;
  TINYTEST_EQUAL_EPSILON(109.22,converter.convert(43.0));
  return 1;
}

// TemperatureConverter

int CelciusToFahrenheit1() {
  CelsiusToFahrenheitConveter converter;
  TINYTEST_EQUAL_EPSILON(32.0,converter.convert(0.0));
  return 1;
}
int CelciusToFahrenheit2() {
  CelsiusToFahrenheitConveter converter;
  TINYTEST_EQUAL_EPSILON(30.2,converter.convert(-1.0));
  return 1;
}
int CelciusToFahrenheit3() {
  CelsiusToFahrenheitConveter converter;
  TINYTEST_EQUAL_EPSILON(107.6,converter.convert(42.0));
  return 1;
}

int FahrenheitToCelsius1() {
  FahrenheitToCelsiusConverter converter;
  TINYTEST_EQUAL_EPSILON(-17.777778,converter.convert(0.0));
  return 1;
}
int FahrenheitToCelsius2() {
  FahrenheitToCelsiusConverter converter;
  TINYTEST_EQUAL_EPSILON(-18.333333,converter.convert(-1.0));
  return 1;
}
int FahrenheitToCelsius3() {
  FahrenheitToCelsiusConverter converter;
  TINYTEST_EQUAL_EPSILON(5.555556,converter.convert(42.0));
  return 1;
}

int CelsiusToKelvin1() {
  CelsiusToKelvinConverter converter;
  TINYTEST_EQUAL_EPSILON(273.15,converter.convert(0.0));
  return 1;
}
int CelsiusToKelvin2() {
  FahrenheitToCelsiusConverter converter;
  TINYTEST_EQUAL_EPSILON(272.15,converter.convert(-1.0));
  return 1;
}
int CelsiusToKelvin3() {
  FahrenheitToCelsiusConverter converter;
  TINYTEST_EQUAL_EPSILON(315.15,converter.convert(42.0));
  return 1;
}

TINYTEST_START_SUITE(Tests);
  //CurrencyConverter
  TINYTEST_ADD_TEST(EuroToDollar1);
  TINYTEST_ADD_TEST(EuroToDollar2);
  TINYTEST_ADD_TEST(EuroToDollar3);
  TINYTEST_ADD_TEST(DollarToEuro1);
  TINYTEST_ADD_TEST(DollarToEuro2);
  TINYTEST_ADD_TEST(DollarToEuro3);
  TINYTEST_ADD_TEST(DollarToYen1);
  TINYTEST_ADD_TEST(DollarToYen2);
  TINYTEST_ADD_TEST(DollarToYen3);
  //LengthConverter
  TINYTEST_ADD_TEST(MilesToMeters1);
  TINYTEST_ADD_TEST(MilesToMeters2);
  TINYTEST_ADD_TEST(MilesToMeters3);
  TINYTEST_ADD_TEST(YardsToMeters1);
  TINYTEST_ADD_TEST(YardsToMeters2);
  TINYTEST_ADD_TEST(YardsToMeters3);
  TINYTEST_ADD_TEST(InchesToCentimeter1);
  TINYTEST_ADD_TEST(InchesToCentimeter2);
  TINYTEST_ADD_TEST(InchesToCentimeter3);
  //TemperatureConverter
  TINYTEST_ADD_TEST(CelciusToFahrenheit1);
  TINYTEST_ADD_TEST(CelciusToFahrenheit2);
  TINYTEST_ADD_TEST(CelciusToFahrenheit3);
  TINYTEST_ADD_TEST(FahrenheitToCelsius1);
  TINYTEST_ADD_TEST(FahrenheitToCelsius2);
  TINYTEST_ADD_TEST(FahrenheitToCelsius3);
  TINYTEST_ADD_TEST(CelsiusToKelvin1);
  TINYTEST_ADD_TEST(CelsiusToKelvin2);
  TINYTEST_ADD_TEST(CelsiusToKelvin3);
TINYTEST_END_SUITE();

TINYTEST_MAIN_SINGLE_SUITE(Tests);
