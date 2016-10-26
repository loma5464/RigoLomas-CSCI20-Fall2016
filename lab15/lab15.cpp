// Rigoberto Lomas-Velazco
// CSCI020
// 10/25/16
// 4.1 Lab
// Single Dimension Arrays

// In this lab I will be creating a menu program. My menu will have 10 different 
// items for the user to choose from. The program will allow the user to choose an
// item until they say they are done.



#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
int i = 0;
int x = 0;
int numChoices = 100;
    
    string userChoices[numChoices];
    cout << "Choose one item from the list at a time." << endl;
    cout << "When you're done choosing your items enter 'done'" << endl;
    cout << "into the item select box." << endl;
    while (i < numChoices && userChoices[i - 1] != "done")
    {
        cout << endl;
        cout << endl;
        cout << "Apple, Apricot, Avocdo, Banana, Blackberry," << endl;
        cout << "Blueberry, Coconut, Lime, Watermelon, Pineapple." << endl;
        cout << endl;
        cout << "Choose one item from the list above: ";
        cin  >> userChoices[i];
        i++;
        x++;
    }
    for (i = 0; i < x - 1; i++)
    {
        cout << "Your list of choises is " << userChoices[i] << "." << endl;
    }
}