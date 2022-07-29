//-----------------------------------------------------------
// Main program.
//-----------------------------------------------------------
#include "stack.h"
int main ()
{
  // Variables
  Stack stack;
  char character;
  string top;
  ifstream din;

  // Open the file
  din.open ("json2.txt");
  if (din.fail ())
    {
      cout << "Error";
    }

  while (!din.eof ())
    {
      character = din.get ();
      cout << character;

      // If the character is a { or a [ then push it
      if ((character == '{') || (character == '['))
	{
	  string makeString (1, character);
	  stack.Push (makeString);
	}

      // If the character is a ] and a [ pop it 
      if ((character == ']') && (top == "["))
	{
	  stack.Pop (top);
	}
	
	  // If the character is a } and a { pop it
	  if ((character == '}') && (top == "{"))
	{
	  stack.Pop (top);   
	}
	
      // For top
      if (character == '}')
	{
	  stack.Top (top);
	}
	
	  // For top
	  if (character == ']')
	{
	  stack.Top (top);    
	}

      // Formatting the output
      if (character == '{')
	{
	  cout << endl;
	}

      if (((character == '}') && (character == ',')) || (character == ','))
	{
	  cout << endl;
	}

      if ((character == ']') && (character == ','))
	{
	  cout << endl;
	}
       
      //For testing that the stack is working
      //stack.Print();
    }

}
