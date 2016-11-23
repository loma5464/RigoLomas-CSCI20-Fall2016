#include "lab21.h"
#include "MyClass.h"
/*
 *  This class is a dummy class to help show how to
 *  break our class into an interface and implementation
 *  file. It will set a member variable to 1 on initialization
 *  and output it using the Output() function.
 */



// Program starts here
int main() {
  // Create a MyClass Object
  MyClass object;
  // Call the output member function
  object.Output();
  // This ends our program
  return 0;
}