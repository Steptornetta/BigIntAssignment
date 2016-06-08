//cmpsc122 Assignment 6
// Please do not modify this file!
// --- Program to test BigInt class.
// Modified from textbook Larry Nyhoff,  ADTs, Data Structures, and Problem Solving 
// with C++, 2nd ed., Prentice-Hall, 2005.

#include <iostream>
using namespace std;

#include "BigInt.h"

int main()
{
   
//  However, you are not allowed to modify the following codes.

   char response;
   do
   {
      BigInt number1, number2;
      cout <<"Enter a big integer:\n";
      cin >> number1;
      cout <<"Enter another big integer:\n";
      cin >> number2;
      
	  // original one: test the operation + 
      cout << "The sum of\n\t"
           << number1 << " + " << number2
           << "\nis\n\t" << number1 + number2 << endl;
	  
	  // 1. test the operation > 
	  cout << "\nThe bigger number of\n\t"
           << number1 << "\nand\n\t" << number2
           << "\nis\n\t" << ((number1 > number2) ? number1 : number2) << endl;
		   
	  // 2. test the operation - 
	  cout << "\nThe subtraction of\n\t"
           << number1 << " - " << number2
           << "\nis\n\t" << number1 - number2 << endl;


	  // 3.(bonus) test the operation *

	  
	  // comment the following out if you don't do 3.
	  /*
	  cout << "\nBONUS part:" << endl;
	  cout << "The multiplication of\n\t"
           << number1 << " * " << number2
           << "\nis\n\t" << number1 * number2 << endl;
		   */
      cout << "\nAdd more integers (Y or N)? ";
      cin >> response;
	  
   }
   while (response == 'y' || response == 'Y');

   return 0;
}
