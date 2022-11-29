/*
   Name - Connor Willans
   Class - CSC1720
   Date - 4/26/19
   Function - Using an array based stack to convert binary to decimal
*/

#include <iostream>
#include "linkedStack.h"

using namespace std;

int main()
{
   linkedStackType<int> stack;
   linkedStackType<int> binary;

   stack.push(1);
   stack.push(0);
   stack.push(4);

   binary = stack;

   stack.decimalToBinary(binary);

   cout<<"The decimal number: 104";
 
   cout<<" in binary is: ";

   while(!binary.isEmptyStack())
   {
      cout<<binary.top();
      binary.pop();
   }
   cout<<endl;
 
   return 0;
}
