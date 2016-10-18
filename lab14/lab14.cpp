// Rigo Lomas-Velazco
// CSCI 20
// Lab 14

    /************************************************
FINANCIAL SIMULATION
You have a bank account whose annual interest
rate depends on the amount of money you have
in your account at the beginning of each year. 
Your annual rate starts at 3%, and grows by an
additional half a percent for each thousand
dollars in your account up to, but not exceeding
8%. Interest in this account is compounded monthly
at the annual rate.  Each year you also make a
deposit (before the bank figures out what your
rate is, fortunately).  Write a program that
simulates these financial interactions.  It
should first ask the user how many years he
wants to simulate, and at the beginning of each
year it should ask the user how much he wants to
deposit.
***************************************************/
#include <iostream>
using namespace std;
 
int main()
{
  //Get number of years
  int year;
  cout << "How many years would you like to simulate: ";
  cin >> year;
 
  /*************************************************/
  /******** S I M U L A T E   Y   Y E A R S ********/
  /*************************************************/
  double balance = 0;
  for(int k = 1; k <= year; k++) {
 
    //Get payment amount & adjust balance
    double payment;
    cout << "Payment for year " << k << " : ";
    cin >> payment;
    balance = balance + payment;
 
    //Compute annual rate R
    int T = balance / 1000; //Get number of 1000's
    double annualRate = 3 + 0.5*T;//Compute rate
    if (annualRate > 8.0) //Correct for 8% cap
      annualRate = 8.0;
 
    //Compute new balance with interest for the year
    double interest = annualRate/100;
    for(int i = 0; i < 12; i++)
      balance = balance*(1 + interest/12);
  }
 
  //Print final balance
  cout << "Final balance is " << balance << " dollars" << endl;
  return 0;
}