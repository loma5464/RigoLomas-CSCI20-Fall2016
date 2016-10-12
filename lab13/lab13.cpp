//Rigo Lomas-Velazco
//Lab 13
//Looping

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int hour = 1;
    int minute = 0;
    int userStartHour = 0;
    int userStartMinute = 0;
    int userEndHour = 0;
    int userEndMinute = 0;
    string AmPm1;
    string AmPm2;
    char colon;
    
    /*while (hour < 2)
    {
        minute = 0;
        
        while(minute <= 59)
        {
        cout << hour << ":"; 
        if (minute <= 9)
            {
                cout << "0" << minute << endl;
            }
        else 
            {
                cout << minute << endl;
            }
        ++ minute;
        }
        ++ hour;
    };*/

    
    cout << endl;
    cout << "Enter start military time(ex: 24:00): ";
    cin >> userStartHour >> colon >> userStartMinute;
    cout << "Enter end military time: ";
    cin >> userEndHour >> colon >> userEndMinute;
    
    while (userStartHour != userEndHour)
    {
        if (userStartHour > 24)
        {
            userStartHour = userStartHour - 24;
        }
        userStartMinute = 0;
        
        while (userStartMinute <= 59 || userStartMinute <= userEndMinute)
        {
            if(userStartMinute <= 0)
            {
                cout << userStartHour << ":0" << userStartMinute << endl;
            }
            else
            {
                cout << userStartHour << ":" << userStartMinute << endl;
            }
            userStartMinute = userStartMinute + 15;
        }
    ++ userStartHour;
    }
}
