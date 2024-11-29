#include<iostream>
#include"mytemperature.h"
#include <iomanip>
using namespace std;
int main()
{
	cout << "Celsius    Fahrenheit   |   Fahrenheit       Celsius" << endl;
	cout <<fixed<<  "40.0   " << setprecision(1)<< celsius_to_fah(40.0) << "    |" << "120.0   " << setprecision(2)<<fahrenheit_to_cels(120.0) << endl;
	cout  << "39.0   "  <<setprecision(1) << celsius_to_fah(39.0)<< "    |" << "120.0   " << setprecision(2) << fahrenheit_to_cels(120.0) << endl;
	cout  << "38.0   " << setprecision(1) << celsius_to_fah(38.0) << "    |" << "110.0   " << setprecision(2) << fahrenheit_to_cels(110.0) << endl;
	cout  << "37.0   " << setprecision(1) << celsius_to_fah(37.0) << "    |" << "100.0   " << setprecision(2) << fahrenheit_to_cels(100.0) << endl;
	cout  << "36.0   " << setprecision(1) << celsius_to_fah(36.0) << "    |" << "90.0   " << setprecision(2) << fahrenheit_to_cels(90.0) << endl;
	cout  << "35.0   " << setprecision(1) << celsius_to_fah(35.0) << "    |" << "80.0   " << setprecision(2) << fahrenheit_to_cels(80.0) << endl;
	cout  << "34.0   " << setprecision(1) << celsius_to_fah(34.0) << "    |" << "70.0   " << setprecision(2) << fahrenheit_to_cels(70.0) << endl;
	cout  << "33.0   " << setprecision(1) << celsius_to_fah(33.0) << "    |" << "60.0   " << setprecision(2) << fahrenheit_to_cels(60.0) << endl;
	cout  << "32.0   " << setprecision(1) << celsius_to_fah(32.0) << "    |" << "50.0   " << setprecision(2) << fahrenheit_to_cels(50.0) << endl;
	cout  << "31.0   " << setprecision(1) << celsius_to_fah(31.0) << "    |" << "40.0   " << setprecision(2) << fahrenheit_to_cels(40.0) << endl;
	cout  << "30.0   " << setprecision(1) << celsius_to_fah(30.0) << "    |" << "120.0   " << setprecision(2) << fahrenheit_to_cels(30.0) << endl;
	
}