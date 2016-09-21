//Rigoberto lomas-Velazco
//CSCI 20
//Lab 7 Parameters and Arguments
//For this lab I will be making a program for two different songs. they will each have two parameters.
//I will also be doing two verses for each song.
#include <iostream>
#include <string>
using namespace std;
template <typename verb, typename fruit1, typename fruit2> void song2(verb x, fruit1 y, fruit2 z); // Call-foreward to the int main can look for the Apples and Bananas function.

//Function for the Hokey Pokey song.
template <typename side , typename limb> void song1(side x , limb y)
{
    cout << "You put your " << x << " " << y << " in you put your " << x << " " << y << " out." <<endl;
    cout << "You put your " << x << " " << y << " in and you shake it all about." <<endl;
    cout << "You do the hokey pokey and you turn yourself around." << endl;
    cout << "Thats what it's all about." << endl;
    return;
}

int main()
{
   cout << endl;
   cout << "The Hokey Pokey Song" << endl;
   cout << endl;
   song1("right", "foot");
   cout << endl;
   song1("left", "arm");
   cout << endl;
   cout << "***********************************************************************************************************************" << endl;//used to make a border between the two songs. So its easier to diferentiate.
   cout << endl;
   
   cout << "Apples and Bananas Song" << endl; 
   song2("eat", "apples", "bananas");
   song2("ate", "ay-pples", "ba-nay-nays");
   song2("ite", "i-pples", "bi-ni-nis");
    
   return 0;
}


// Function for the  Apples and Bananas song.
template <typename verb, typename fruit1, typename fruit2> void song2(verb x, fruit1 y, fruit2 z)
{
    cout << endl;
    cout << "I like to " << x << ", " << x << ", " << x << ", " << y << " and " << z << "." << endl;
    cout << "I like to " << x << ", " << x << ". " << x << ", " << y << " and " << z << "." << endl;
    cout << endl;
}