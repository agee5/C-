/* to use this, 
     - write a form that calls this program with 'action=' in the <form> tag
     - call getPostData() 
     - use getField(string) to access form information 

*/
#include <iostream>
#include <stdio.h>
#include <string.h>
#include "htmlform.h"
#include "tree.h"

void printProgram(string);   /// print the program in HTML
void parseProgram(string);

using namespace std;

int main()
{
  /// complete the http header
  cout << "Content-type: text/html\n\n";

  /// build a form object
  HTMLform steps;
  steps.getPostData();

  /// Show the debugging
  cout << "Queue Parser Lab startup" << endl;
  steps.debug();

  

  /// the entire programs
  string program = steps.getField("program");
  
  printProgram(program);
  
  //The next line is for you to complete
  string program1 = steps.getField("program");
  
  parseProgram(program1);

  return 0;
}

void printProgram(string program)
{
  /// a single line
  string line;
  /// for counting the lines
  int count = 0;
  /// where the newline is (for peeling off a line)
  int pos;

  while ( string::npos != (pos = program.find("\n") ) )
    {
      line = program.substr(0, pos);    /// before the newline
      program = program.substr(pos+1);  /// after the newline
      /// there might newline characters at the end of line
      if (line[pos] < '0') line.erase(pos-1);
      
      
      /// here's where you need to process 'line'
      /// this routine just prints it.
      cout << ++count << ": [" << line << "] len=" << line.size() 
           << "<br />" << endl;
    }

}

void parseProgram(string program)
{
  
}
