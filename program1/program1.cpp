// Rigoberto Lomas-Velazco
//CSCI 20
// 9-12-16
// Assignment #1 - Variables

#include <iostream>
using namespace std;


int main(){
double hourWage = 0; // Hourly wage
double hourWeek = 0;// Total hours worked in the week
double grossPay = 0;
double taxDeduction = 0;
double netPay = 0;    

cout << "Enter your hourly wage: $";
cin >> hourWage;
cout << "Enter the total hours you have worked this week: ";
cin >> hourWeek;
grossPay = hourWage * hourWeek;
taxDeduction = grossPay * .17;
netPay = grossPay - taxDeduction;
cout << endl;
cout << "Wage SLip" << endl;
cout << endl;
cout << "Hourly Wage: $"   << hourWage     << endl;
cout << "Hours Worked: "   << hourWeek     << endl;
cout << "Gross Pay: $"     << grossPay     << endl;
cout << "Tax Deduction: $" << taxDeduction << endl;
cout << "Net Pay: $"       << netPay       << endl;

return 0;    
}
