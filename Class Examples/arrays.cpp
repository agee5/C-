// Arrays - allow us to build many variable at once
//          one name many elements
//          subscript is a positive integer it has a relationship
//          for-loop treat every element the same
//          subscript allows me to use math on variable
// Initialize arrays   Declaration only   int rainbow [ 10 ];
//                     rainbow [6]  = 35;
//                     int rainbow [10] = { 1,3,5,7,9,11,13,15,17,19};
//                     cout << rainbow [0] << endl;
//                     index is 0 to 9
//                     int rainbow [10]={0};
//                      for (int i=0;i<10;i++)
//  Expose arrays     array name array instruction
//                      rainbow is pointer
//                      elements live together in an apt house
//                      rainbow  point at first element
//                      rainbow [0] go to where rainbow is pointing
//                      add zero*sizeof(int)

#include <iostream>
using namespace std;



int main()
{
    int sum = 0;
    int rainbow [10] = {1,2,3,4,5,6,7,8,9,10};
    cout << &rainbow << " is the home of rainbow"<< endl;
    cout << rainbow << " is where rainbow is pointing" << endl;
    cout << &rainbow[0] << " is where rainbow [0] lives" << endl;
    cout << &rainbow[1] << " is at " << endl;
    cout << &rainbow[2] << " is rainbow [2]"<<endl;
    for(int i=0; i<10; i++) // cummulative
    {
      sum += rainbow[i];
      cout << rainbow [i-1]<< endl;
    }
    cout<<"Sum is "<< sum<<endl;

    return 0;
}
