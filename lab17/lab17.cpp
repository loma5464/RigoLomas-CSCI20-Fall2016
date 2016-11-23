// Rigoberto Lomas-Velazco

// 4.3 Lab C Strings

// This program is responsible for creating user names for a new website you have created.  It should accept a first name of up to 10 
// characters and a last name of up to 20 characters.  It should tell the user if the name is larger than the max size.  It should also
// determine if the names are the same and output a warning.  After checking these things, it should create three different user name 
// options (for example: apbrowne; aprilbrowne; abrowne).

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;


int main()
{
    int i = 0;
    int x = 0;
    char userFirstName[10];
    char userLastName[10];
    cout << "Welcome to my website." << endl;
    cout << "Let's create your username." << endl;
    cout << "Enter your first name: ";
    cin  >> userFirstName;
    for (i = 0; userFirstName[i] != '\0'; i++)//checks the length of the input
    {
    }
    while (i > 10)// Checks to make sure the name isnt too long
    {
        cout << "Your name is too long. It must be 10 characters or less." << endl; 
        cout << "Enter a shorter one: ";
        cin  >> userFirstName;
        for (i = 0; userFirstName[i] != '\0'; i++)//checks the lenth of the new input
        {
        }
    }
    i = 0;
    cout << "Enter yout last name: ";
    cin  >> userLastName;
    for (i = 0; userLastName[i] != '\0'; i++)//Same process as line 28 through 39. Now used for the last name
    {
    }
    while (i > 10)
    {
        cout << "Your name is too long. It must be 10 characters or less." << endl; 
        cout << "Enter a shorter one: ";
        cin  >> userLastName;
        for (i = 0; userLastName[i] != '\0'; i++)
        {
        }
    }
    
    cout << "Your possible names could be:" << endl;
    userFirstName[0] = tolower(userFirstName[0]); // Changes the uppercase letter to a lowercase letter
    userLastName[0] = tolower(userLastName[0]);
    cout << userFirstName[0] << userFirstName[1] << userLastName << endl;
    cout << userFirstName << userLastName << endl;
    cout << userFirstName[0] << userLastName << endl;
}