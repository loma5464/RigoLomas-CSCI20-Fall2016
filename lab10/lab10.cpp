//Rigo Lomas-Velazco
//10/03/16
//Lab 10 Boolen nd Logical Operators

#include <iostream>
using namespace std;

int problem1()
{
int suzyAge = 25;
int johnAge = 21;
cout << (suzyAge < johnAge) << "; John is not older than Suzy." << endl; 
}

int problem2()
{
int x = 7;
int y = 7;
cout << (x >= y) << "; X is greater than or equal to Y." << endl;
}

int problem3()
{
int a = 1;
int b = 9;
cout << (a == b) << "; A is not equal to B." << endl;
}

int problem4()
{
int limit = 20;
int count = 10;
cout << ((limit * count) / 2 > 0) << "; The sttement ((limit * count) / 2 > 0) is true." << endl;
}

int problem5()
{
int t = -4;
int z =  0;
cout << (t > 5 || z < 2) << "; The statement (t > 5 || z < 2) is true." << endl;
}

int problem6()
{
    int variable = -5;
    cout << (!(variable > 0)) << "; The statement (!(variable > 0)) is true." << endl;
}

int problem7()
{
    int a = 16;
    cout << (a / 4 < 8 && a >= 4) << "; The statement (a / 4 < 8 && a >= 4) is true." << endl;
}

int problem8()
{
    int x = -2;
    int y =  5;
    int z =  0;
    cout << (x * y < 10 || y * z < 10) << "; The statement (x * y < 10 || y * z < 10) is true." << endl;
}

int problem9()
{
    int j = -2;
    int k =  5;
    int l =  4;
    int x = -2;
    int y =  5;
    cout << (!(j * l < 10) || y / x * 4 < y * 2)  << "; The statement (!(j * l < 10) || y / x * 4 < y * 2) is true." << endl;
}

int main()
{
    problem1();
    problem2();
    problem3();
    problem4();
    problem5();
    problem5();
    problem6();
    problem7();
    problem8();
    problem9();
}