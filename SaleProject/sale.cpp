#include <string>
#include <iostream>
#include <vector>
#include <time.h>
#include <cstdlib>
using namespace std;

/******************************************************************
 Author : AJ Gee
 Date : 4/9/2019
 Name : sale.cpp
 Description : Draw pool balls for discount
******************************************************************/

int main()
{
    int urnArr[] = {1,1,1,2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8};
    std::vector<int> urn(urnArr, urnArr+24);
    int tally[25] = {0};
    int ball1 = 0;
    int ball2 = 0;
    int ball3 = 0;
    int choice1 = 0;
    int choice2 = 0;
    int choice3 = 0;
    int total = 0;
    int numSim = 0;

    srand(time(0));

    while (numSim <= 1000)
    {

        choice1 = rand() % 24;
        //cout<<"Choice 1 is "<< choice1 <<endl;
        ball1 = urn[choice1];
        //cout<<"Ball number 1 is "<< ball1 <<endl;
        //std::swap(urn[choice1], urn.back());
        //cout << "\t Last element is "<< urn.back() << endl;
        //urn.pop_back();
        //cout << "\t Last element is "<< urn.back() << endl;

        choice2 = rand() % 23;
        //cout<<"Choice 2 is "<<choice2 <<endl;
        ball2 = urn[choice2];
        //cout<<"Ball number 2 is "<< ball2 <<endl;
        //std::swap(urn[choice2], urn.back());
        //cout << "\t Last element is "<< urn.back() << endl;
        //urn.pop_back();
        //cout << "\t Last element is "<< urn.back() << endl;

        choice3 = rand() % 22;
        //cout<<"Choice 3 is "<<choice3 <<endl;
        ball3 = urn[choice2];
        //cout<<"Ball number 3 is "<< ball3 <<endl;
        //std::swap(urn[choice3], urn.back());
        //cout << "\t Last element is "<< urn.back() << endl;
        //urn.pop_back();
        //cout << "\t Last element is "<< urn.back() << endl;

        total = ball1 + ball2 + ball3;
        //cout<<"The total of discount is "<< total <<endl;



        numSim = numSim + 1;
        ++tally[total];

    }

    for (int i = 1; i <= 24; i++)
    {
     cout <<"Total for "<< i <<"% discount is "<< tally[i] << "\n";
    }

    return 0;

}
