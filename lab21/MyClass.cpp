#include "MyClass.h"
#include "lab21.h"

MyClass::MyClass() : num_(0) {}

void MyClass::Output() {
  cout << "My number is: " << num_ << endl;
}


int randomNumber(){
   srand(time(0));
   return (rand()% 10 + 1);
}