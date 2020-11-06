#include <iostream>

using namespace std;


int main()
{
    //storage
    int age;
    int num = 100.999 ;
    double decimal = 0.012345678 ;

    string text = "C++ is fun" ;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //input
    cout << "Enter you age: ";      //prompt
    cin >> age;
    cout << "\n You entered "<< age << " as your age"<<endl;        //echo
    //processing

    //output
    cout << "Integer variable starts at: " << num << endl;
    cout << "Double variable starts at: " << decimal << endl;
    cout << "String variable starts at: " << text << endl;
    return 0;
}
