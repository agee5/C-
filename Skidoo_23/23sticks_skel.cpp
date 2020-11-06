#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;

/******************************************************************
 Author : AJ Gee
 Date : 2/26/2019
 Name : 23sticks.cpp
 Description : Choosing sticks game
******************************************************************/

int main ()
{
    srand(time(0));

    int cpuChoice = 0;
    int stickChoice;
    int sticks = 23;
    bool cpuTurn = false;

    cout<<"\nThere are 23 sticks you may take up to 3 sticks on any turn."<<endl;
    cout<<"The loser is the one who takes the last stick."<<endl;

    while (sticks > 1)
    {
        if ( cpuTurn == false) //Players Turn
        {
            //Put everything that happens in players turn
        }

        else   //CPU turn
        {
            //Put everything that happens in CPU turn
        }
    }
    if (cpuTurn == false)
    {
        cout<<"Sorry you have to choose the last stick, you lose."<<endl;
        sticks = sticks - 1;
    }

    else
    {
        cout<<"The computer has to choose the last stick, YOU WIN!!!"<<endl;
        sticks = sticks - 1;
    }

    return 0;
}

