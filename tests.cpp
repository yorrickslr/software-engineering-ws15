// Copyright 2015: DreadNoize, yorrickslr

#include "tinytest.h"

// CurrencyConverter

int EuroToDollar1() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}
int EuroToDollar2() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}
int EuroToDollar3() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}

int DollarToEuro1() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}
int DollarToEuro2() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}
int DollarToEuro3() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}

int DollarToYen1() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}
int DollarToYen2() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}
int DollarToYen3() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}

// LengthConverter

int MetersToMiles1() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}
int MetersToMiles2() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}
int MetersToMiles3() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}

int MetersToYards1() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}
int MetersToYards2() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}
int MetersToYards3() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}

int InchesToCentimeter1() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}
int InchesToCentimeter2() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}
int InchesToCentimeter3() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}

// TemperatureConverter

int CelciusToFahrenheit1() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}
int CelciusToFahrenheit2() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}
int CelciusToFahrenheit3() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}

int FahrenheitToCelsius1() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}
int FahrenheitToCelsius2() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}
int FahrenheitToCelsius3() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}

int CelsiusToKelvin1() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}
int CelsiusToKelvin2() {
	TINYTEST_EQUAL_EPSILON(0,0);
	return 1;
}
int CelsiusToKelvin3() {
	TINYTEST_EQUAL_EPSILON(0,0);
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
	TINYTEST_ADD_TEST(MetersToMiles1);
	TINYTEST_ADD_TEST(MetersToMiles2);
	TINYTEST_ADD_TEST(MetersToMiles3);
	TINYTEST_ADD_TEST(MetersToYards1);
	TINYTEST_ADD_TEST(MetersToYards2);
	TINYTEST_ADD_TEST(MetersToYards3);
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
