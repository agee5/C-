#include <iostream>

using namespace std;

//Define the Struct
struct StudentInfo
{
	string firstName;
	string lastName;
	int stuAge;
};


int main ()
{
	StudentInfo stuinfo;

	cout <<"This is a simple signup please enter the information."<< endl;
	cout <<"Please enter your First name: ";
	cin >> stuinfo.firstName;   //This is how you read user input into one of the struct variables
	cout <<"Please enter your Last name: ";
	cin >> stuinfo.lastName;
	cout <<"Please enter your Age: ";
	cin >> stuinfo.stuAge;

	cout << "Hello " << stuinfo.firstName << " " << stuinfo.lastName << ", you are " << stuinfo.stuAge << "." << endl;

	return 0;
}
