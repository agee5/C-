#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;

/******************************************************************
 Author : AJ Gee
 Date : 3/7/2019
 Name : 23sticks.cpp
 Description : Choosing sticks game
******************************************************************/

//The goal of this game is to be the one who gets the sticks down to 5, if the CPU gets them down to 5 the user
//will lose, if the user gets them down to 5 the CPU will lose. As long as the user makes the proper final selection.

int main ()
{
    bool gameRun = true;

    while (gameRun)
    {
        srand(time(0));   //this is for determining a random number

        int sticks = 23;        //Starting number of sticks
        int cpuChoice = 0;      //CPU stick selection
        int stickChoice;        //User stick selection
        char playAgain;         //This will take user input if they want to play the game again
        bool cpuTurn = false;   //This will determine who's turn it is
        bool gameRun = true;


        cout<<"\nThere are 23 sticks you may take up to 3 sticks on any turn."<<endl;
        cout<<"The loser is the one who takes the last stick."<<endl;

        while (sticks > 1)
        {
            if ( cpuTurn == false) //Players Turn
            {
                //Put everything that happens in players turn
                cout<<"\nYour turn. How many sticks do you want to take:";
                cin>> stickChoice;

                if (stickChoice >= 1 && stickChoice <= 3) //making sure the user only inputs a 1, 2, or 3.
                {
                    sticks = sticks - stickChoice;  //Subtracting the users selection from the amount of sticks
                    cout<<"\nThere are now "<< sticks <<" left."<<endl;
                    cpuTurn = true; //Using this to make it the CPUs turn
                }
                else
                {
                    cout<<"Please enter a number between 1 and 3";
                }
            }

            else   //CPU turn
            {
                //Put everything that happens in CPU turn
                cpuChoice = rand() % 3 + 1; //Random number between 1 and 3 for the CPU turn until number of sticks is <= 8
                if ( sticks == 8){cpuChoice = 3;}
                if ( sticks == 7){cpuChoice = 2;}       //These 4 lines are the CPU trying to get the number
                if ( sticks == 6){cpuChoice = 1;}       // of sticks down to 5 so it will win.
                if ( sticks == 4){cpuChoice = 3;}

                if ( sticks == 3){cpuChoice = 2;}
                if ( sticks == 2){cpuChoice = 1;}       //Making sure the CPU doesn't make the count go below 23
                cout<<"\nComputer's turn. The computer chooses "<< cpuChoice <<"."<<endl;
                sticks = sticks - cpuChoice;        //Subtracting the CPU selection from the amount of sticks
                cout<<"\nThere are now "<< sticks <<" left."<<endl;
                cpuTurn = false;        //Making it the Users turn
            }
        }
        if (cpuTurn == false)       //This says if it is the users turn and there is only 1 stick left, the user
                                // will have to select the last stick and lose.
        {
            cout<<"Sorry you have to choose the last stick, you lose."<<endl;
            sticks = sticks - 1;
        }

        else            //This says if it is the CPUs turn and there is only 1 stick left, the CPU
                        // will have to select the last stick and lose.
        {
            cout<<"The computer has to choose the last stick, YOU WIN!!!"<<endl;
            sticks = sticks - 1;
        }

        cout<<"\nWould you like to play again (y/n):";
        cin>> playAgain;
        if (playAgain == 'y'){gameRun = true;}
        if (playAgain == 'n'){gameRun = false;}
    }
    return 0;
}

