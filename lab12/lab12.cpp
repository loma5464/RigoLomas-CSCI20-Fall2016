//Rigo Lomas
//Lab 12
// In this lab I will be using  flow chart from funnyjunk.com and creating if then statements from it.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string userAnswer;
    int userAge = 0;
    
    cout << "COMPUTER SOLVING FLOWCHART" << endl;
    cout << endl;
    cout << "Enter your age: ";
    cin >> userAge;
    cout << endl;
    cout << "Answer everything with either a yes or no." << endl;
    cout << endl;
    cout << "Does the damn thing work?: ";
    cin >> userAnswer;
    if (userAnswer == "yes" || userAnswer == "Yes" || userAnswer == "YES")
    {
        cout << "Dont screw with it then." << endl;
    }
    else 
    {
        cout << "Did you screw with it?: ";
        cin >> userAnswer;
            
            if (userAnswer == "no" || userAnswer == "No" || userAnswer == "NO")
            {
                cout << "Then just let it die." << endl;
            }
            else 
            {
                cout << "Does anyone know?: ";
                cin >> userAnswer;
                    
                    if (userAnswer == "yes" || userAnswer == "Yes" || userAnswer == "YES")
                    {
                        cout << "You poor fool . . . just run and hide in the hills." << endl;
                    }
                    else
                    {
                        cout << "Can you blme it on somebody else?: ";
                        cin >> userAnswer;
                        if (userAnswer == "yes" || userAnswer == "Yes" || userAnswer == "YES")
                        {
                            cout << "Then you're good. Don't even worry about it." << endl;
                            }
                        else
                        {
                            switch (userAge)
                            {
                                case 0 ... 12:
                                cout << "You poor child." << endl;
                                break;
                                case 13 ... 19:
                                cout << "That's what you get fpr being a stupid teenager." << endl;
                                break;
                                case 20 ... 35:
                                cout << "Wow you're really failing at adulting right now." << endl;
                                break;
                                default:
                                cout << "Well, I really expected something better from you since you are so old. (This is why old people shouldn't mess with computers.)" << endl;
                            }
                        }
                    }
            }
    }
}