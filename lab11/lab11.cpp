//Rigoberto Lomas-Velazco
//Lab 11 If/Else
//10/5/16
//I will be clculating a progrm that can calculate the income tax for a couple.

#include <iostream>
#include <string>
using namespace std;


int main()
{
 string maritalStatus;
 string name;
 double grossIncome = 0;
 double withheld = 0;
 double adjustedGrossIncome = 0;
 double owedTax = 0;
 
   cout << "Enter your name: ";
   getline (cin, name);
   cout << "Enter your filing status (single or married): ";
   cin >> maritalStatus;
   cout << "Enter the amount of your wages for the last year: $";
   cin >> grossIncome;
   cout << "Enter the amount of money withheld: $";
   cin >> withheld;
   cout << endl;
   cout << endl;
   cout << endl;
   
   if (maritalStatus == "single" || maritalStatus == "Single")
   {
       adjustedGrossIncome = grossIncome - 10000;
       
       if (adjustedGrossIncome <= 0)
       {
          owedTax = 0;
       }
       else if (adjustedGrossIncome >= 0 && adjustedGrossIncome <= 8925)
       {
          owedTax = adjustedGrossIncome / 10;
       }
       else if (adjustedGrossIncome >= 8926 && adjustedGrossIncome <= 36250)
       {
          owedTax = 892.50 + ((adjustedGrossIncome - 8925) * 0.15);
       }
       else if (adjustedGrossIncome >= 36251 && adjustedGrossIncome <= 87850)
       {
          owedTax = 4991.25 + ((adjustedGrossIncome - 36250) * 0.25);
       }
       else
       {
          owedTax = 17891.25 + ((adjustedGrossIncome - 87850) * 0.28);
       }
   }
   else
   {
       adjustedGrossIncome = grossIncome - 20000;
       
       if (adjustedGrossIncome >= 0 && adjustedGrossIncome <= 17850)
       {
          owedTax = adjustedGrossIncome * 0.10;
       }
       else if (adjustedGrossIncome >= 17851 && adjustedGrossIncome <= 72500)
       {
          owedTax = 1785 + ((adjustedGrossIncome - 17850) * 0.15);
       }
       else
       {
          owedTax = 9982.50 + ((adjustedGrossIncome - 72500) * 0.28);
       }
   }
   cout << "TAX REPORT" << endl;
   cout << endl;
   cout << "Taxpayer Name: " << name << endl;
   cout << "Total Gross Adjusted Income: $" <<adjustedGrossIncome << endl;
   
   if (owedTax >= withheld)
   {
      owedTax = owedTax - withheld;
      cout << "Total Tax Owed: $" << owedTax << endl; 
   }
   else
   {
      owedTax = withheld - owedTax;
      cout << name << " is entitled to a REFUND of $" << owedTax << endl; 
   }
   
   
   
   
   return 0;
}