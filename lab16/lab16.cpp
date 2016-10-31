// Rigoberto Lomas-Velazco
// CSCI 20
// 4.2 Lab
// Parallel Arrays

// In this lab I will be copying my menu program from my 4.1 lab.
// Along with updating it so that it includes prices for each item.
// AS the user purchses an item, add the price to the total and subtract
// one from the inventory. Output a total cost when they are shopping.

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

 void convert (string & answer) //will convert the users input into all uppercase variables for the while statement.
    {
       for (int i = 0; i < answer.length(); i++)
       answer[i] = toupper (answer[i]);
    }

int main()
{
int i = 0;
int x = 0;
const int numChoices = 100;
double cost = 0;
    string answer[numChoices];
    string userChoices[] = {"APPLE", "APRICOT", "AVOCADO", "BANANA", "BLACKBERRY", "BLUEBERRY", "COCONUT", "LIME", "WATERMELON", "PINEAPPLE"};
    float prices[] = {3.98, 2.99, 1.05, 0.45, 2.16, 2.95, 4.50, 0.29, 2.76, 3.98};
    int inventory[] = {2, 10, 10, 10, 10, 10, 10, 10, 10 ,10};
    cout << "Choose one item from the list at a time." << endl;
    cout << "When you're done choosing your items enter 'done'" << endl;
    cout << "into the item select box." << endl;
    cout << endl;
    cout << endl;
    cout << "Apple, Apricot, Avocado, Banana, Blackberry," << endl;
    cout << "Blueberry, Coconut, Lime, Watermelon, Pineapple." << endl;
    cout << endl;
    cout << "Choose one item from the list above: ";
    cin  >> answer[x];
    convert(answer[x]);
     while (answer[x] != userChoices[i] && i < 10)
        {
            i++;
        }
    cost = cost + prices[i];
    inventory[i] --;
    x++;
    i = 0;
    while (answer[x - 1] != "DONE")
    {
        cout << endl;
        cout << endl;
        cout << "Apple, Apricot, Avocado, Banana, Blackberry," << endl;
        cout << "Blueberry, Coconut, Lime, Watermelon, Pineapple." << endl;
        cout << endl;
        cout << "Choose another item from the list above: " << endl;
        cin  >> answer[x];
        convert(answer[x]);
        while (answer[x] != userChoices[i] && i < 10)
        {
            i++;
        }
        while (inventory[i] == 0)
        {
            cout << endl;
            cout << "We are out of that product." << endl;
            cout << endl;
            cout << "Apple, Apricot, Avocado, Banana, Blackberry," << endl;
            cout << "Blueberry, Coconut, Lime, Watermelon, Pineapple." << endl;
            cout << endl;
            cout << "Choose another item from the list above: " << endl;
            cin  >> answer[x];
            convert(answer[x]);
             while (answer[x] != userChoices[i] && i < 10)
            {
                i++;
            }
            
        }
        x++;
        i = 0;
        while (answer[x - 1] != userChoices[i] && i < 11)
        {
            i++;
        }
        cost = cost + prices[i];
        inventory[i] = inventory[i] - 1;
    }
    cout << endl;
    cout << endl;
    x = 0;
    i = 0;
    while (answer[x] != "DONE")
    {
        cout << "Your number " << x + 1 << " choice was " << answer[x] << "." << endl;
        x++;
    }
    cout << "Your total is $" << cost <<  "." << endl; 
    cout << endl;
    cout << "Leftover Inventory" << endl;
    for (i = 0; i < 10; i++)
    {
        cout << "We have " << inventory[i] << " " << userChoices[i] << "'s left." << endl;
    }
}