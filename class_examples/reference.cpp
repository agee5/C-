/**************************************************
/ Author: Gerald N. Kolb
/ Date:
/ Project:
/ Description:
**************************************************/
//Remarks  Passing by value    Dogyears
//         Passing by reference   Writename
//         allows me to pass and recieve unlimited variables
//stub function = create a incomplete function
//driver = call to a stub function




//preprocessor
#include <iostream>
#include <string>
// namespace
using namespace std;


//prototype
void Writename (string &name);
//void Writetitle();
void DogYears(int years,string name);



// main function
int main ()
{
    // storage
    int years;
    string name = "";

    // input


    cout << "How old is your dog: ";
    cin >> years;
    cout << endl;
    //processing

    Writename(name);
   // Writetitle(); //Drivers
    DogYears(years,name);
    //output

    //ending
    return 0;
}
void Writename (string &name)//Stub Functions
{

    cout << "Enter name of Dog: ";
    cin >> name;
    cout<<endl;
    return;
}
//void Writetitle()//Stub Functions
//{
//    string title = "C++ is Fun";
//    cout << title << endl;
//}
void DogYears(int years,string name)
{

    cout << name <<" is: "<< years*7 <<" in dog years" <<endl;

}
