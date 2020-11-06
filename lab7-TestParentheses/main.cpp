/* to use this, 
     - write a form that calls this program with 'action=' in the <form> tag
     - call getPostData() 
     - use getField(string) to access form information 

*/
#include <iostream>
#include "htmlform.h"
#include <stack>
#include <string>

using namespace std;

bool openClosePar (char firstPar,char closePar)
{
	if(firstPar == '(' && closePar == ')') return true;
	else if(firstPar == '[' && closePar == ']') return true;
	else if(firstPar == '{' && closePar == '}') return true;
	return false;
}

bool matchPar (string pStack)
{
	stack<char> C;
	for(int i=0;i<pStack.length();i++)
	{
		if(pStack[i] == '(' || pStack[i] == '[' || pStack[i] == '{')
			C.push(pStack[i]);
		else if(pStack[i] == ')' || pStack[i] == ']' || pStack[i] == '}')
		{
			if(C.empty() || !openClosePar(C.top(),pStack[i]))
				return false;
			else
				C.pop();
		}
	}
	return C.empty() ? true:false;
}


int main()
{
   
  cout << "Content-type: text/html\n\n";

  /// build a form object
  HTMLform monty;
  monty.getPostData(); /// reads the form and inits the object

  string parendStack = monty.getField("parString");

  if(matchPar(parendStack))
	  cout <<"Valid";
  else
	  cout <<"Invalid";

  return 0;
}
