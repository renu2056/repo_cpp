// convert the  temperature to celsius, fahrenheit and kelvin:

#include<iostream>
using namespace std;
int main()
{
    float celsius;
    cin>>celsius;

    float fahrenheit;
    float fahrenheit_to_celsius = (celsius * 9.0/5.0) + 32;
    cout<<"Temperature (celsius to fahrenheit): "<<fahrenheit_to_celsius<<"\n";

    float celsius_to_fahrenheit = (fahrenheit - 32) * 5.0/9.0;
    cout<<"Temperature (fahrenheit to celsius): "<<celsius_to_fahrenheit<<"\n";

    float celsius_to_kelvin = celsius + 273.15;
    cout<<"Temperature (celsius to kelvin): "<<celsius_to_kelvin<<"\n";

    float kelvin;
    float kelvin_to_celsius = kelvin - 273.15;
    cout<<"Temperature (kelvin to celsius): "<<kelvin_to_celsius<<"\n";

    float fahrenheit_to_kelvin = (fahrenheit + 459.67) * 5.0/9.0;
    cout<<"Temperature (fahrenheit to kelvin): "<<fahrenheit_to_kelvin<<"\n";

    float kelvin_to_fahrenheit = (kelvin * 9.0/5.0) - 459.67;
    cout<<"Temperature (kelvin to fahrenheit): "<<kelvin_to_fahrenheit<<"\n";
    return 0;
}
