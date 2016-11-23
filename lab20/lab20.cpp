// Rigoberto Lomas-Velazco
// CSCI 20
// 5.1 Lab - Pointers

// For this lab I will be adding in my own comments to the code so as to demonstrte my understanding if it and what it does.

#include <iostream> //Includes the i/o stream library
#include <cstring>  //Includes the cstring library
using namespace std;
 
int main()
{
    char firststr[10]; //array for the user input to be compared later
    int firstname = 0;
    char *head = firststr; //pointer head to pointee firststr
    char *tail = firststr; //pointer tail to pointee firststr
    cout << "Please enter a 10 letter word or less" << endl;
    cin >> firststr; // user input is saved in pointee firststr
    strlen(firststr); //checks the length of the string in firststr
    firstname = strlen(firststr); // sets first name  equal to the length of firststr
    cout << "Your word is " << firststr << endl;
    if (firstname<10) // if sttement for when the array is 10 characters or less
    {
        while (*head != '\0') // will cout what is saved in heds pointee
        {
            cout << *head;
            head++;
        }
    }
    else // for all other situtions
    {
        cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
    }
    cout << endl;
    tail = &firststr[strlen(firststr) - 1]; //will flip the string and check the number of characters in it
     if (firstname < 10) //same as the first if statement, except the array has been flipped
    {
        while (*tail>0)
        {
            cout << *tail;
            tail--;
        }
    }
    cout << endl;
    head = firststr; //redeclares head
    tail = &firststr[strlen(firststr) - 1]; // redeclares tail
    head++;
    tail--;
    if (*head == *tail) //compares head and tail to see if the match
    {
        cout << "It is an palindrome!" << endl; // cout for when they do match
    }
    else
    {
        cout << "It is not an palindrome" << endl; // cout for when they don't
    }
 
    return 0;
}