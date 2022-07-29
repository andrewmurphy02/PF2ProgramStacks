#ifndef STACK_H
#define STACK_H

//-----------------------------------------------------------
//  Purpose:    Header file for the integer Stack class.
//  Author:     John Gauch and Andrew Murphy
//-----------------------------------------------------------
#include <cmath>
#include <iostream>
#include <fstream>
using namespace std;

//-----------------------------------------------------------
// Stack data node definition
//-----------------------------------------------------------
struct StackNode
{
   string Number;
   StackNode *Next;
};

//-----------------------------------------------------------
// Define the Stack class interface 
//-----------------------------------------------------------
class Stack
{
 public:
   // Constructors
   Stack();
   Stack(const Stack & stack);
   ~Stack();

   // Methods
   bool IsFull();
   bool IsEmpty();
   void Push(string number);
   void Pop(string &Number);
   void Top(string &Number);
   int GetLength();
   void Print();

 private:
   StackNode *Head;
   int Length;
};

#endif