/* Rigoberto Lomas-Velazco
Lab 4 Mad Libs
Mad Libs from http://www.woojr.com/wp-content/uploads/2010/05/summer-mad-libs.gif*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   int age1;
   float decimal;
   char emotion1;
   char emotion2;
   char emotion3;
   string person1;
   string person2;
   string place1;
   string place2;
   string adjective1;
   string adjective2;
   string adjective3;
   string pluralNoun1;
   string pluralNoun2;
   string pluralNoun3;
   string pluralNoun4;
   string actionVerb1;
   string actionVerb2;
   string noun1;
   string noun2;
   cout << "enter your first name: ";
   cin >> person1;
   cout << "enter your age: ";
   cin >> age1;
   cout << "enter a number with a decimal point that starts with zero: ";
   cin >> decimal;
   cout << "enter an exclimation mark or a question mark: " << endl;
   cout << "1.";
   cin >> emotion1;
   cout << "2.";
   cin >> emotion2;
   cout << "3.";
   cin >> emotion3;
   cout << "enter your best friends first name: ";
   cin >> person2;
   cout << "enter the name of a place you like to go visit (one word):";
   cout << endl;
   cout << "1.";
   cin >> place1;
   cout << "2.";
   cin >> place2;
   cout << "enter an adjective: ";
   cout <<endl;
   cout << "1.";
   cin >> adjective1;
   cout << "2.";
   cin >> adjective2;
   cout << "3.";
   cin >> adjective3;
   cout << "enter a plural noun:";
   cout << endl;
   cout << "1.";
   cin >> pluralNoun1;
   cout << "2.";
   cin >> pluralNoun2;
   cout << "3.";
   cin >> pluralNoun3;
   cout << "4.";
   cin >> pluralNoun4;
   cout << "enter and action verb:";
   cout << endl;
   cout << "1.";
   cin >> actionVerb1;
   cout << "2.";
   cin >> actionVerb2;
   cout << "enter a noun:" << endl;
   cout << "1.";
   cin >> noun1;
   cout << "2.";
   cin >> noun2;
   cout << " Hi my name is " << person1 << " and I am " << age1 << " years old. ";
   cout << endl;
   cout << "Last summer, my mom and dad took me and " << person2; 
   cout << endl;
   cout << "on a trip to the " << place1 << ". The weather there is very " << adjective1 << emotion1;
   cout << endl;
   cout << "Northern " << place1 << " has " << decimal << " " << pluralNoun1;
   cout << endl;
   cout << "and they make " << adjective2 << " " << pluralNoun2 << " there. ";
   cout << endl;
   cout << "My family also goes to the " << place2 << " to go " << actionVerb1 << " or see the ";
   cout << endl;
   cout << pluralNoun3 << ". The people that live there love to eat " << pluralNoun4;
   cout << endl;
   cout << "and are very proud of their big " << noun1 << ". They also like to ";
   cout << endl;
   cout << actionVerb2 << " in the sun and swim in the " << noun2 << emotion2;
   cout << endl;
   cout << "It was a really " << adjective3 << " trip" << emotion3;
   
} 