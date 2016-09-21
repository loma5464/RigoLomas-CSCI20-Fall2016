//Rigo Lomas-Velazco
//CSCI 20
//Lab 8 REturn Values
// In this lab I will be creating two functions. One will take an input of pounds and convert it to kilograms. Then the other progrm will take in an input of kilograms and convert tht to punds.

#include <iostream>
using namespace std;

float toPound(float kilograms1);
float toKilo(float pounds1) //this is he function for converting pounds into kilograms
{
    float kilograms1 = 0;
    kilograms1 = pounds1 * 0.453592;
    return kilograms1;
}

int main()
{
    float kilograms1; // variable for the toKilo function
    float kilograms2; // variable for the toPound function
    float pounds1; // variabke for the toKilo function
    float pounds2; // variable for the toPound function
    cout << "inpute the weight in pounds: ";
    cin >> pounds1;
    cout << "input the weight in kilograms: ";
    cin >> kilograms2; 
    kilograms1 = toKilo(pounds1);
    pounds2 = toPound(kilograms2);
    cout << "The value you entered in pounds has been converted to " << kilograms1 << "kgs." << endl;
    cout << "The value you entered in kilograms has been converted to " << pounds2 << "lbs." << endl;
    
    return 0;
}

float toPound(float kilograms2)//This function will take in kilograms and convert the value into pounds.
{
    float pounds2;
    pounds2 = kilograms2 / 0.453592;
    return pounds2;
}