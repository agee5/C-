/* to use this, 
     - write a form that calls this program with 'action=' in the <form> tag
     - call getPostData() 
     - use getField(string) to access form information 

*/
#include <iostream>
#include "htmlform.h"

using namespace std;

int main()
{
  /// complete the http header
  cout << "Content-type: text/html\n\n";

  /// build a form object
  HTMLform monty;
  monty.getPostData(); /// reads the form and inits the object

  /// Show the debugging (optional)
  //monty.debug();

  /// the output ('name' is in the html form that started this)
  //cout << "Welcome, " << monty.getField("name") << "!";

  /// access another field ('color' is in the html form)
  //cout << "Your favorite color is " << monty.getField("color") << "!";

  cout <<"If you want to become " << monty.getField("noun1") << " literate, here are some key" << endl;
  cout << monty.getField("pnoun1") <<" that you should "<< monty.getField("verb1")<<" as quickly as possible:"<<endl;  cout <<"\nCD ROM: Stands for Compact "<< monty.getField("Dword") <<" Read Only"<<endl;
  cout << monty.getField("Mword")<<". This compact disk can hold as many as 600"<<endl;
  cout << monty.getField("pnoun2")<<", which is the equivalent of 700 floppy "<<monty.getField("pnoun3")<<"."<<endl;
  cout <<"\nCYBERSPACE: Stands for the imaginary "<< monty.getField("noun2")<<" that people"<<endl;
  cout <<"enter when they "<< monty.getField("ver2")<<" with each other through computers on"<<endl;
  cout <<"a collection of "<< monty.getField("pnoun4")<<", known as the Inter"<< monty.getField("noun3")<<"."<<endl;
  cout <<"\nE-Mail: Means "<< monty.getField("advb")<<" transmitted "<< monty.getField("noun4")<<"."<<endl;
  cout <<"\nMODEM: Is the device that allows a "<< monty.getField("adj")<<" computer to"<<endl;
  cout <<"transmit "<< monty.getField("pnoun5")<<" over a phone "<< monty.getField("noun5")<<endl;

  return 0;
}
