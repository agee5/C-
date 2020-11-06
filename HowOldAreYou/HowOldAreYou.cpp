#include <iostream>
//Libraries are used in C++ to add features to the language
//There are 72 keywords in C++
//iostream is a library about input and output
using namespace std; //semicolons end a complete thought
/******************************************************************
 Author : AJ Gee
 Date : 2/7/2019
 Name : hello.cpp
 Description : Demo for today
******************************************************************/
const int DOGADJUST = 7;
int main()
// this is our startup function
// this is also our end function
{
    int age;
    //frills show organization
    cout << "How old are you: "; //This is prompting for input
    cin >> age;
    cout << "\nYou are "<< age << " years old."<<endl;
    cout << "You are also "<< age*DOGADJUST << " in dog years."<<endl;
    //end function
    return 0;
}
