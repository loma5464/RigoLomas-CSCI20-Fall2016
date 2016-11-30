// Rigoberto Lomas-Velazco
// Program 4
// Checkbook Transaction History

// My program will calculate and print the current balance of the account.  
// It will output the transactions in columns to the screen and to a new file.  
// It will also keep track of each payee for checks and output the following for each payee:
//     -The payee
//     -The total number of payments
//     -The total cost of payments

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <cctype>
#include <fstream>
#include <iomanip>
using namespace std;



int main()
{
    ifstream    inFile;
    ofstream    outFile;
    string      checkNumber[30];
    string      date[30];
    string      payee[30];
    string      resultsArray[30][30][30];
    double      amountPaid[30];
    int         timesPaid[30] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    double      totalAmountPaid[30];
    int         i = 0;
    int         x = 0;
    string      fileName;
    
    cout << "Please enter the name of the file without the '.txt': ";
    cin  >> fileName; //Will save the name of the textfile the user will use.
    cout << endl;
    inFile.open(fileName + ".txt"); //opens the file
    // inFile.open("checkbook.txt");
    outFile.open("results.txt");
    if(!inFile.is_open()) // Test to see if the file was opened.
    {
        cout << "Error: The file did not open." << endl;
        cout << "Run program again and re-enter the file name." << endl;
    }
    else
    {
        cout << "The file has been opened" << endl;
        cout << endl;
        cout << endl;
    }
    while (!inFile.eof()) //Takes in all the information from the checkbook file.
    {
        getline(inFile, checkNumber[i], ':');
        getline(inFile, date[i], ':');
        getline(inFile, payee[i], ':');
        inFile >> amountPaid[i];
        i++;
    }
    for(i = 0; i < 30; i++) // outputs information from checkbook file to results file
    {
        if(payee[i] == "") //Made so that all blank payees are ignored.
        {
        }
        else
        {
            outFile << left << setw(15) << checkNumber[i] << left << setw(10) << date[i] << left << setw(15) << payee[i] << right << setw(10) << amountPaid[i] << endl;  
        }
    }
    for (i = 0; i < 30; i++) // Will replace the '-' in the checkbook to "Bank Deposit". To keep track of deposits as well as transactions.
    {
        if(payee[i] == "-")
        {
            payee[i] = "Bank Deposit";
        }
    }
    for(i = 0; i < 30; i++)
    {
        totalAmountPaid[i] = amountPaid[i]; // Adds the initial occurance of the payee to the total.
        timesPaid[i]++;
        for(x = i + 1; x < 30; x++)
        {
            if(payee[i] == payee[x]) // Check to see how many times a certain payee appears in the checkbook file.
            {
                timesPaid[i]++;
                totalAmountPaid[i] = totalAmountPaid[i] + amountPaid[x];
                payee[x] = ""; // Every subsequent occurance of the payee will be erased. To avoid counting up the same payee multiple times.
            }
        }
    }
    cout << "RESULTS" << endl;
    cout << endl;
    for (i = 0; i < 30; i++)
    {
        if (payee[i] == "")
        {
        }
        else
        {
            cout << "Payee: " << payee[i] << endl;
            cout << "Times Paid: " << timesPaid[i] << endl;
            cout << "Total Amount Paid: " << "$" << totalAmountPaid[i] << endl;
            cout << endl;
            cout<< endl;
        }
    }
    inFile.close();
    outFile.close();
    return 0;
}