// Ryan Spaulding
// Rigoberto Lomas-Velazco
// CSCI 20
// Program 5

// This program will take the blood types of each parent and find out what
// possible blood types their children could be.


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <cctype>
#include <fstream>
#include <iomanip>
using namespace std;

//Function will convert the user entry to all caps.
void convert (string & s)
{
    for (int i = 0; i < s.length(); i++)
    s[i] = toupper(s[i]);  
}
//class will find out possible parent genes.
class possibleGenes
{
    private:
    string parentGenes[4];
    public:
    void setGenes(string genes);
    string getGenes(int i);
    possibleGenes();        //default constructor

};

    possibleGenes::possibleGenes() 
    {
        parentGenes[0] = "";
        parentGenes[1] = "";
        parentGenes[2] = "";
        parentGenes[3] = "";
    }
    void possibleGenes::setGenes(string genes)
    {
        parentGenes[0] = genes;
        // Variables for parents positive blood type.
        if (parentGenes[0] == "A+")
        {                                  
            parentGenes[0] = "A";  
            parentGenes[1] = "O";
            parentGenes[2] = "+";
            parentGenes[3] = "-";
        }
        if (parentGenes[0] == "B+")
        {
            parentGenes[0] = "B";
            parentGenes[1] = "O";
            parentGenes[2] = "+";
            parentGenes[3] = "-";
        }
        if (parentGenes[0] == "AB+")
        {
            parentGenes[0] = "A";
            parentGenes[1] = "B";
            parentGenes[2] = "+";
            parentGenes[3] = "-";
        }
        if (parentGenes[0] == "O+")
        {
            parentGenes[0] = "O";
            parentGenes[1] = "O";
            parentGenes[2] = "+";
            parentGenes[3] = "-";
        }
        // Variables for parents negative blood type. 
        if (parentGenes[0] == "A-")  
        {                                
            parentGenes[0] = "A";
            parentGenes[1] = "O";
            parentGenes[2] = "-";
            parentGenes[3] = "-";
        }
        if (parentGenes[0] == "B-")
        {
            parentGenes[0] = "B";
            parentGenes[1] = "O";
            parentGenes[2] = "-";
            parentGenes[3] = "-";
        }
        if (parentGenes[0] == "AB-")
        {
            parentGenes[0] = "A";
            parentGenes[1] = "B";
            parentGenes[2] = "-";
            parentGenes[3] = "-";
        }
        if (parentGenes[0] == "O-")
        {
            parentGenes[0] = "O";
            parentGenes[1] = "O";
            parentGenes[2] = "-";
            parentGenes[3] = "-";
        }
    }
string possibleGenes::getGenes(int i)
{
    
    return parentGenes[i];
}

int main()
{
    possibleGenes father;
    possibleGenes mother;
    string  fatherBloodType[4];
    string  motherBloodType[4];
    string  childBloodType[4];
    string  childRh[4];
    string  childOutcome[16];  
    int     x = 0;
    int     y = 0;
    int     i = 0;
    
    cout << endl;
    cout << endl;
    cout << "This program will evaluate the possible blood types of an" << endl;
    cout << "offspring, given the blood types of both parents." << endl;
    cout << endl;
    cout << "Enter the blood type of the father: ";
    cin  >> fatherBloodType[0];
    convert(fatherBloodType[0]);
    cout << "Enter the blood type of the mother: ";
    cin  >> motherBloodType[0];
    convert(motherBloodType[0]);
    // Class call to find out possible genes that a parent could pass down to the child.
    // possibleGenes(fatherBloodType);
    // possibleGenes(motherBloodType);
    father.setGenes(fatherBloodType[0]);
    for(i= 0; i < 4; i++)
    {
        father.getGenes(i);
    }
    mother.setGenes(motherBloodType[0]);
    for(i= 0; i < 4; i++)
    {
        mother.getGenes(i);
    }
    // This will work as our punnet square for blood type.
    childBloodType[0] = father.getGenes(0) + mother.getGenes(0);
    childBloodType[1] = father.getGenes(0) + mother.getGenes(1); 
    childBloodType[2] = father.getGenes(1) + mother.getGenes(0); 
    childBloodType[3] = father.getGenes(1) + mother.getGenes(1); 
    // This will be our punnet square for finding Rh of the child
    childRh[0] = father.getGenes(2) + mother.getGenes(2);
    childRh[1] = father.getGenes(2) + mother.getGenes(3);
    childRh[2] = father.getGenes(3) + mother.getGenes(2);
    childRh[3] = father.getGenes(3) + mother.getGenes(3);
    // This will take the results and change them to single letter blood types. (Except for AB)
    for (i = 0; i < 4; i++) 
    {
        if (childBloodType[i] == "BA")
        {
            childBloodType[i] = "AB";
        }
        if (childBloodType[i] == "OA" || childBloodType[i] == "AA" || childBloodType[i] == "AO")
        {
            childBloodType[i] = "A";
        }
        if (childBloodType[i] == "OB" ||  childBloodType[i] == "BB" || childBloodType[i] == "BO")
        {
            childBloodType[i] = "B";
        }
        if (childBloodType[i] == "OO")
        {
            childBloodType[i] = "O";
        }
    }
    // Will do the same the above function does, except for the Rh. (ex. ++ & +-, will become +)
    for (i = 0; i < 4; i++)
    {
        if (childRh[i] == "--")
        {
            childRh[i] = "-";
        }
        else
        {
            childRh[i] = "+";
        }
    }
    // Will combine the possible blood types with the possible Rh types.
    i = 0;
    for (x = 0; x < 4; x++)
    {
        for (y = 0; y < 4; y++)
        {
            childOutcome[i] = childBloodType[x] + childRh[y];
            i++;
        }
    }
    // Eliminates repetition in blood types. (ex. A+, A+, AB becomes A+, AB)
    for (i = 0; i < 16; i++)
    {
        for (x = i + 1; x < 16; x++)
        {
            if (childOutcome[i] == childOutcome[x])
            {
                childOutcome[x] = "";
            }
        }
    }
    cout << endl;
    cout << "Possible child blood types: ";
    // Will cout the possible blood types.
    for (i = 0; i < 16; i++)
    {
        if (childOutcome[i] == "")
        {
        }
        else
        {
            cout << childOutcome[i] << ", ";
        }
    }
    return 0;
}