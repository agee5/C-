#include <iostream>
#include <vector>
using namespace std;

/***********************************************
Description: Vector Demo
***********************************************/
int main()
{
    // Initialize
    vector <int> vec(3,100);
    // Check size of vector
    cout << "Vector size is " << vec.size() << endl;
    // Check elements
    cout << "Element 0 is " << vec[0]<< endl;
    cout << "Element 1 is " << vec[1]<< endl;
    cout << "Element 2 is " << vec[2]<< endl;
    // Add elements
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(9);
    cout << "\t3 elements added "<< endl;
    // Check statistics
    cout << "Vector size is now "<< vec.size() << endl;
    cout << "Vector capacity is "<< vec.capacity() << endl;
    cout << "\t First element is "<< vec.front() << endl;
    cout << "\t Second element is "<< vec.at(1)<< endl;
    cout << "\t Last element is "<< vec.back() << endl;
    // Delete Element
    vec.pop_back();
    cout << "\t Last element removed "<< endl;
    // Check statistics
    cout << "\t Last element is now "<< vec.back() << endl;
    cout << "\t Vector size is now "<< vec.size() << endl;
    cout << "\t Is vector empty? "<< vec.empty() << endl;
    // Clear Vector
    vec.clear();
    cout << "\t Vector cleared "<< endl;
    // Check statistics
    cout << "\t Vector size is now "<< vec.size() << endl;
    cout << "\t Is Vector empty "<< vec.empty()<< endl;
    //Closing Statements
    return 0;
}
