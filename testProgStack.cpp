//Program to test the various operations of a stack
 
#include <iostream>
#include "myStack.h"
  
using namespace std;
 
void testCopyConstructor(stackType<int> otherStack);
 
int main()
{
    stackType<int> stack(50);
    stackType<int> stack2(50);
    stackType<int> copyStack(50);
    stackType<int> dummyStack(100); 

    stack.initializeStack();
    stack.push(85);
    stack.push(28);
    stack.push(56);

    cout<<"top of stack: "<<stack.top()<<endl;

    stack.reverseStack(stack2);

    copyStack = stack2;
    dummyStack = stack2;

    cout<<"After reversing stack to stack2, here's stack 2"<<endl;


    while(!stack2.isEmptyStack())
    {
       cout<<stack2.top()<<" ";
       stack2.pop();
    }
    
    cout<<endl;

    cout<<"Copied the elements of stack2 to copyStack"<<endl;

    cout << "The elements of copyStack: ";
    while (!copyStack.isEmptyStack())  //print copyStack
    {
        cout << copyStack.top() << " ";
        copyStack.pop();
    }
    cout << endl;

    copyStack = stack;
    testCopyConstructor(stack);  //test the copy constructor

    if (!stack.isEmptyStack())
        cout << "The original stack is not empty." << endl
             << "The top element of the original stack: "
             << copyStack.top() << endl;


    cout<<"After copying the elements of stack2 into dummyStack..."<<endl;
    cout << "The elements of dummyStack: ";
    while (!dummyStack.isEmptyStack())  //print dummyStack
    {
        cout << dummyStack.top() << " ";
        dummyStack.pop();
    }
    cout << endl;

    return 0;
}

void testCopyConstructor(stackType<int> otherStack)
{
    if (!otherStack.isEmptyStack())
        cout << "otherStack is not empty." << endl
             << "The top element of otherStack: "
             << otherStack.top() << endl;
}
