# include <iostream>
# include <string>
using namespace std;
int main () {
    string place1;
    string want1;
    cout << "want enter: ";
    cout << "1.";
    cin >> want1;
    cout << "name a place";
    getline(cin, place1);
   cout << "i like to go to " << place1;
}