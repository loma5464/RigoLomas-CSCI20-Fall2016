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
    
    for (hour == 1; hour < 2; hour++) 
    { 
        minute = 0;                        
        
        for(minute == 0; minute <= 59; minute++)
        {     
            cout << hour << ":";
                
            if (minute <= 9)
            {                       
                cout << "0" << minute << " pm" << endl;
            }
            else 
            {
                cout << minute << " pm" << endl;
            }
        }
    };

    
     cout << endl;
     cout << "Enter start military time(ex: 21:00): ";
     cin >> userStartHour >> colon >> userStartMinute;
     cout << "Enter end military time: ";
     cin >> userEndHour >> colon >> userEndMinute;
     
     for (userStartHour; userStartHour != userEndHour; ++userStartHour)
     {
        for (userStartMinute; userStartMinute <=59; userStartMinute += 15)
        {
            if (userStartMinute > 9)
            {
                cout << userStartHour << ":" << userStartMinute << endl;
            }
            else
            {
                cout << userStartHour << ":0" << userStartMinute << endl;
            }
        }
        userStartMinute = 0;
        if (userStartHour >= 24)
        {
            userStartHour = 0;
        }
     }
}
