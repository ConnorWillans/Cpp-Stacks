/*
   Name - Connor Willans
   Class - CSC1720
   Date - 4/26/19
   Function - Using an array based stack to convert binary to decimal
*/

#include <iostream>
#include "myStack.h"

using namespace std;

int main()
{
   stackType<int> stack(50);
   stackType<int> dec(50);



   stack.push(1);
   stack.push(1);
   stack.push(1);
   stack.push(0);
   stack.push(1);
   //29

   dec = stack;

   cout<<"The binary number: ";

   while(!stack.isEmptyStack())
   {
      cout<<stack.top();
      stack.pop();
   }
   
   cout<<" is equal to: " <<stack.binaryToDecimal(dec) <<" in decimal form."<<endl;
   
   return 0;
}
