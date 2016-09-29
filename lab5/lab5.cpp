// Rigoberto Lomas-Velazco
// Lab 5 Monster Objects

#include <iostream>
#include <string>
using namespace std;


struct monster
{
    string name;
    string head;
    string eyes;
    string ears;
    string nose;
    string mouth;
};

int main () {
    monster monster1;
    monster monster2;
    cout << "What is your monsters name? (one word): ";
    cin >> monster1.name;
    cout << endl;
    cout << "Your monsters name is " << monster1.name << "." << endl;
    cout << endl;
    cout << "For each of " << monster1.name << "'s features you will enter one of the following;" << endl;
    cout << "zombus , spiritem, vegitas, or wackus." << endl;
    cout << endl;
    cout << "What type of head do you want for " << monster1.name << "?: ";
    cin >> monster1.head;
    cout << "What kind of eyes will " << monster1.name << " have ?: ";
    cin >> monster1.eyes;
    cout << "How about " << monster1.name << "'s ears?: ";
    cin >> monster1.ears;
    cout << "What nose do you want for " << monster1.name << "?: ";
    cin >> monster1.nose;
    cout << "Finally, what mouth type do you want for " << monster1.name << "?: ";
    cin >> monster1.mouth;
    cout << endl;
    cout << "So, " << monster1.name << " will have a " << monster1.mouth << " mouth, and " << monster1.eyes << " eyes." << endl;
    cout << monster1.name << " will also have " << monster1.ears << " ears, and a " << monster1.nose << " nose." << endl;
    cout << "Those parts will all go on " << monster1.name << "'s great big " << monster1.head << " head." << endl;
    cout << endl;
    cout << "How about we make a friend for " << monster1.name << "?" << endl;
    cout << "what will we name " << monster1.name << "'s friend? (one word): ";
    cin >> monster2.name;
    cout << endl;
    cout << monster1.name << "'s friend will be called " << monster2.name << "." << endl;
    cout << endl;
    cout << "What type of head do you want for " << monster2.name << "?: ";
    cin >> monster2.head;
    cout << "What kind of eyes will " << monster2.name << " have ?: ";
    cin >> monster2.eyes;
    cout << "How about " << monster2.name << "'s ears?: ";
    cin >> monster2.ears;
    cout << "What nose do you want for " << monster2.name << "?: ";
    cin >> monster2.nose;
    cout << "Finally, what mouth type do you want for " << monster2.name << "?: ";
    cin >> monster2.mouth;
    cout << endl;
    cout << "So, " << monster2.name << " will have a " << monster2.mouth << " mouth, and " << monster2.eyes << " eyes." << endl;
    cout << monster2.name << " will also have " << monster2.ears << " ears, and a " << monster2.nose << " nose." << endl;
    cout << "Those parts will all go on " << monster2.name << "'s itty bitty " << monster2.head << " head." << endl;
    cout << endl;
    cout << monster1.name << " and " << monster2.name << " seem like they will be best friends.";

}