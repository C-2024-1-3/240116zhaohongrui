#pragma once
#include<iostream>
using namespace std;
double celsius_to_fah(double cel)
{
	double fah = 9 * cel / 5 + 32;
	return fah;
}
double fahrenheit_to_cels(double fah)
{
	double cel = 5 * (fah - 32) / 9;
	return cel;
}
