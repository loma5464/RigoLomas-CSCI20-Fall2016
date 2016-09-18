# include <iostream>
using namespace std;
void PrintRigo() 
{
   char rChar = 'R';
   char iChar = 'I';
   char gChar = 'G';
   char oChar = 'O';
   cout << rChar<<rChar<<rChar<<rChar<<"  "<<iChar<<iChar<<iChar<<iChar<<iChar<<" "<<gChar<<gChar<<gChar<<gChar<<gChar<<gChar<<"  "<<oChar<<oChar<<oChar<<oChar<<oChar<<endl;
   cout << rChar<<"   "<<rChar<<"   "<<iChar<<"   "<<gChar<<"       "<<oChar<<"   "<<oChar<<endl;                                         
   cout << rChar<<rChar<<rChar<<rChar<<"    "<<iChar<<"   "<<gChar<<gChar<<gChar<<gChar<<gChar<<gChar<<"  "<<oChar<<"   "<<oChar<<"     Copyright Rigoberto Lomas-Velazco 1993"<<endl; 
   cout << rChar<<"   "<<rChar<<"   "<<iChar<<"   "<<gChar<<"  "<<gChar<<" "<<gChar<<"  "<<oChar<<"   "<<oChar<<endl; 
   cout << rChar<<"   "<<rChar<<" "<<iChar<<iChar<<iChar<<iChar<<iChar<<" "<<gChar<<gChar<<gChar<<gChar<<" "<<gChar<<"  "<<oChar<<oChar<<oChar<<oChar<<oChar<<endl;

return;
   }
int main ()
{
    long long moneyInCents = 0; // The amount of money , in cents, that the user puts into the coinstar machine.
    long long moneyInQuarters= 0;
    long long moneyInDimes = 0;
    long long moneyInNickles = 0;
    long long moneyInPennies = 0;
    double moneyInDollars = 0; // The amount of money the user put in the machine converted into dollar figure.
    double moneyKept = 0; // The ammount of money kept by the coinstar machine.
    double moneyForUser = 0; // The amount of money the user is given, in cash, after the coinstar fee is taken.
    
    cout << "Enter the amount of change you want turned into cash: ";
    cin >> moneyInCents;
    
    moneyInQuarters = moneyInCents / 25;
    moneyInDimes = (moneyInCents % 25) / 10;
    moneyInNickles = ((moneyInCents % 25) % 10) / 5;
    moneyInPennies = (((moneyInCents % 25) % 10) % 5) / 1;
    moneyInDollars = static_cast<double>(moneyInCents) * static_cast<double>(.01);
    moneyKept = moneyInDollars * 0.109;
    moneyForUser = moneyInDollars - moneyKept;
    
    cout << "The amount of money you put in the coinstar machine is: $" << moneyInDollars << endl;
    cout << "Quarter(s) used: " << moneyInQuarters << endl;
    cout << "Dime(s) used: " << moneyInDimes << endl;
    cout << "Nickle(s) used: " << moneyInNickles << endl;
    cout << "Pennie(s) used: " << moneyInPennies << endl;
    cout << "The Coinstar fee is: $" << moneyKept << endl; 
    cout << "The cash you will recieve is: $" << moneyForUser << endl;
    cout << endl;
    cout << endl;
    cout << endl;
   
    PrintRigo ();
    return 0;
    
}