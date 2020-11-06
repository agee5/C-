#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;

/******************************************************************
 Author : AJ Gee
 Date : 3/7/2019
 Name : skidoo.cpp
 Description : Choosing door game
******************************************************************/

int main ()
{
    srand(time(0));

    int winningDoor = rand() % 3 + 1;
    int doorChoice = 0;
    int losingDoor = 0;
    char numSwitch;

    cout<< "        *****************************"<<endl;
    cout<< "        **    Welcome to Skidoo    **"<<endl;
    cout<< "        *****************************"<<endl;
    cout<< "You see 3 doors before you,numbered 1, 2 and 3"<<endl;
    cout<<"two of these have a sick goat in them,"<<endl;
    cout<< "the other one has has a prize of $30,000 in it"<<endl;
    cout<< "\nWhich door do you choose: ";
    cin>> doorChoice;

    if (winningDoor == 3)
    {
        if ( doorChoice == 1)
        {
            cout<<"I am going to show you what is behind door 2."<<endl;
            cout<<"It is a sick goat. Would you like to stay with your current selection of 1 (y/n):";
            cin>> numSwitch;
            if (numSwitch == 'y')
            {
                cout<< "OK so we will stay with door 1"<<endl;
                cout<< "Sorry, your door has a sick goat behind it YOU LOSE!!!!"<<endl;
            }
            else if (numSwitch == 'n')
            {
                cout<< "Alright we will change your selection to door 3"<<endl;
                cout<< "\nWOOOOOOOOOOOOOOOOOOOOOOOOOOO!!!!!!  YOU WIN!!!!"<<endl;
            }
        }
        else if (doorChoice == 2)
        {
            cout<<"I am going to show you what is behind door 1."<<endl;
            cout<<"It is a sick goat. Would you like to stay with your current selection of 2 (y/n):";
            cin>> numSwitch;
            if (numSwitch == 'y')
            {
                cout<< "OK so we will stay with door 2"<<endl;
                cout<< "Sorry, your door has a sick goat behind it YOU LOSE!!!!"<<endl;
            }
            else if (numSwitch == 'n')
            {
                cout<< "Alright we will change your selection to door 3"<<endl;
                cout<< "\nWOOOOOOOOOOOOOOOOOOOOOOOOOOO!!!!!!  YOU WIN!!!!"<<endl;
            }
        }
        else if (doorChoice == 3)
        {
            cout<<"I am going to show you what is behind door 2."<<endl;
            cout<<"It is a sick goat. Would you like to stay with your current selection of 3 (y/n):";
            cin>> numSwitch;
            if (numSwitch == 'y')
            {
                cout<< "OK so we will stay with door 3"<<endl;
                cout<< "\nWOOOOOOOOOOOOOOOOOOOOOOOOOOO!!!!!!  YOU WIN!!!!"<<endl;
                cout<< "Sorry, your door has a sick goat behind it YOU LOSE!!!!"<<endl;
            }
            else if (numSwitch == 'n')
            {
                cout<< "Alright we will change your selection to door 1"<<endl;
                cout<< "Sorry, your door has a sick goat behind it YOU LOSE!!!!"<<endl;
            }
        }
    }

    if (winningDoor == 2)
    {
        if ( doorChoice == 1)
        {
            cout<<"I am going to show you what is behind door 3."<<endl;
            cout<<"It is a sick goat. Would you like to stay with your current selection of 1 (y/n):";
            cin>> numSwitch;
            if (numSwitch == 'y')
            {
                cout<< "OK so we will stay with door 1"<<endl;
                cout<< "Sorry, your door has a sick goat behind it YOU LOSE!!!!"<<endl;
            }
            else if (numSwitch == 'n')
            {
                cout<< "Alright we will change your selection to door 2"<<endl;
                cout<< "\nWOOOOOOOOOOOOOOOOOOOOOOOOOOO!!!!!!  YOU WIN!!!!"<<endl;
            }
        }
        else if (doorChoice == 2)
        {
            cout<<"I am going to show you what is behind door 3."<<endl;
            cout<<"It is a sick goat. Would you like to stay with your current selection of 2 (y/n):";
            cin>> numSwitch;
            if (numSwitch == 'y')
            {
                cout<< "OK so we will stay with door 2"<<endl;
                cout<< "\nWOOOOOOOOOOOOOOOOOOOOOOOOOOO!!!!!!  YOU WIN!!!!"<<endl;
            }
            else if (numSwitch == 'n')
            {
                cout<< "Alright we will change your selection to door 1"<<endl;
                cout<< "Sorry, your door has a sick goat behind it YOU LOSE!!!!"<<endl;
            }
        }
        else if (doorChoice == 3)
        {
            cout<<"I am going to show you what is behind door 1."<<endl;
            cout<<"It is a sick goat. Would you like to stay with your current selection of 3 (y/n):";
            cin>> numSwitch;
            if (numSwitch == 'y')
            {
                cout<< "OK so we will stay with door 3"<<endl;
                cout<< "Sorry, your door has a sick goat behind it YOU LOSE!!!!"<<endl;
            }
            else if (numSwitch == 'n')
            {
                cout<< "Alright we will change your selection to door 2"<<endl;
                cout<< "\nWOOOOOOOOOOOOOOOOOOOOOOOOOOO!!!!!!  YOU WIN!!!!"<<endl;
            }
        }
    }

    if (winningDoor == 1)
    {
        if ( doorChoice == 1)
        {
            cout<<"I am going to show you what is behind door 3."<<endl;
            cout<<"It is a sick goat. Would you like to stay with your current selection of 1 (y/n):";
            cin>> numSwitch;
            if (numSwitch == 'y')
            {
                cout<< "OK so we will stay with door 1"<<endl;
                cout<< "\nWOOOOOOOOOOOOOOOOOOOOOOOOOOO!!!!!!  YOU WIN!!!!"<<endl;
            }
            else if (numSwitch == 'n')
            {
                cout<< "Alright we will change your selection to door 2"<<endl;
                cout<< "Sorry, your door has a sick goat behind it YOU LOSE!!!!"<<endl;
            }
        }
        else if (doorChoice == 2)
        {
            cout<<"I am going to show you what is behind door 3."<<endl;
            cout<<"It is a sick goat. Would you like to stay with your current selection of 2 (y/n):";
            cin>> numSwitch;
            if (numSwitch == 'y')
            {
                cout<< "OK so we will stay with door 2"<<endl;
                cout<< "Sorry, your door has a sick goat behind it YOU LOSE!!!!"<<endl;
            }
            else if (numSwitch == 'n')
            {
                cout<< "Alright we will change your selection to door 1"<<endl;
                cout<< "\nWOOOOOOOOOOOOOOOOOOOOOOOOOOO!!!!!!  YOU WIN!!!!"<<endl;
            }
        }
        else if (doorChoice == 3)
        {
            cout<<"I am going to show you what is behind door 2."<<endl;
            cout<<"It is a sick goat. Would you like to stay with your current selection of 3 (y/n):";
            cin>> numSwitch;
            if (numSwitch == 'y')
            {
                cout<< "OK so we will stay with door 3"<<endl;
                cout<< "Sorry, your door has a sick goat behind it YOU LOSE!!!!"<<endl;
            }
            else if (numSwitch == 'n')
            {
                cout<< "Alright we will change your selection to door 1"<<endl;
                cout<< "\nWOOOOOOOOOOOOOOOOOOOOOOOOOOO!!!!!!  YOU WIN!!!!"<<endl;
            }
        }
    }

    return 0;
}
