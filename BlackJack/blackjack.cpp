#include <stdio.h>
#include <string>
#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

/******************************************************************
 Author : AJ Gee
 Date : 3/28/2019
 Name : blackjack.cpp
 Description : Game of blackjack
******************************************************************/

int rolldice();
int getwager(int& money);
int playerturn(int& money,int& wager,bool& bust,int& total,int& houseroll);


int main()
{
    int money = 150;
    int wager = 0;
    int total = rand() % 23 + 2 ;
    int houseroll = rand() % 23 + 2 ;
    //int total = 0;
    bool bust = false;
    bool cpuTurn = false;

    srand(time(NULL));

    getwager(money);
    cout<<"Your total is "<< total<<"."<<endl;
    cout<<"House roll is "<< houseroll <<"."<<endl;
    playerturn(money, wager, bust, total, houseroll);

    return 0;
}

int rolldice()
{
    srand(time(NULL));

    int houseroll = rand() % 15 + 1;

    if(houseroll == 1) {houseroll = 11;}
    else if(houseroll >= 11) {houseroll = 10;}

    return 1;
}

int getwager(int& money, int& wager)
{
    cout<<"You have "<< money <<" dollars."<<endl;
    cout<<"Enter your wager:";
    cin>> wager;
    if(wager > money){cout<<"You do not have enough money to make that bet, please enter a valid amount:"<<endl;}
    else {money = money - wager;}
    return 1;
}

int playerturn(int& money,int& wager,bool& bust,int& total,int& houseroll)
{
    int standhit = 0;

    cout<<"Enter 0 for stand, 1 to hit:"<<endl;
    cin>> standhit;
    if (standhit == 0)
    {
        cout<<"You chose to stand"<<endl;

    }
    else
    {

    }

    return 1;
}

void houseturn(int houseroll, bool bust, int total)
{

}
