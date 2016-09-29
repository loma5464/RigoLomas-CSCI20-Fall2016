//Rigo Lomas-Velazco
//9/28/16
/*crete  class tht converts Tempertures between Kelvin, fahrenheit, and celsius, it will internally store the value in Kelvin. 
This class will be run by the provided main.*/
// I received help from Ryan for this lab.

#include <iostream>
using namespace std;

class TemperatureConverter {
    public:
        TemperatureConverter();
        TemperatureConverter(double kelvin);
        void SetTempFromKelvin(double tempInKelvin);
        double GetTempFromKelvin();
        void SetTempFromCelsius (double tempInCelsius);
        double GetTempAsCelsius();
        void SetTempFromFahrenheit(double tempInFahrenheit);
        double GetTempAsFahrenheit();
        void PrintTemps();
    private:
        double kelvin1;
        
        
};

TemperatureConverter::TemperatureConverter() {
    kelvin1 = 0;
    return;
}

TemperatureConverter::TemperatureConverter(double kelvin) {
    kelvin1 = kelvin;
    return;
}

void TemperatureConverter::SetTempFromKelvin(double kelvin) {
    kelvin1 = kelvin;
    return;
    
}

double TemperatureConverter::GetTempFromKelvin(){
    return kelvin1;
}

void TemperatureConverter::SetTempFromCelsius(double tempInCelsius) {
    kelvin1 = tempInCelsius + 273.15;
    return;
}

void TemperatureConverter::SetTempFromFahrenheit(double tempInFahrenheit) {
    kelvin1 = (5 * (tempInFahrenheit - 32) / 9) + 273.15;
    return;
}

double TemperatureConverter::GetTempAsCelsius(){
    double tempInCelsius;
    tempInCelsius = kelvin1 - 273.15;
    return tempInCelsius;
}

double TemperatureConverter::GetTempAsFahrenheit() {
    double tempInFahrenheit;
    tempInFahrenheit = (((kelvin1 - 273.15) * 9) / 5 + 32);
    return tempInFahrenheit;
}

void TemperatureConverter::PrintTemps(){
    cout << GetTempFromKelvin() << "K" << endl;
    cout << GetTempAsCelsius() << "C" << endl;
    cout << GetTempAsFahrenheit() << "F" << endl;
}