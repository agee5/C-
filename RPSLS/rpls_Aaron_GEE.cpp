#include <iostream>
#include <time.h>
#include <string>

using namespace std;

/******************************************************************
 Author : AJ Gee
 Date : 5/2/2019
 Name : rpsls_Aaron_Gee.cpp
 Description : Rock, Paper, Scissors, Lizard, Spock
******************************************************************/

int main()
{
    int rpsls[5][5]={{0,-1,1,1,-1},
                    {1,0,-1,-1,1},
                    {-1,1,0,1,-1},
                    {-1,1,-1,0,1},
                    {1,-1,1,-1,0}};
    string gameOutcome[5][5]={{"It is a draw","Paper Covers Rock","Rock Smashes Scissors","Rock Crushes Lizard","Spock Vaporizes Rock"},
                              {"Paper Covers Rock","It is a Draw","Scissors Cuts Paper","Lizard Eats Paper","Paper Disproves Spock"},
                              {"Rock Smashes Scissors","Scissors Cuts Paper","It is a Draw","Scissors Decapitates Lizard","Spock Smashes Scissors"},
                              {"Rock Crushes Lizard","Lizard Eats Paper","Scissors Decapitates Lizard","It is a Draw","Lizard Poisons Spock"},
                              {"Spock Vaporizes Rock","Paper Disproves Spock","Spock Smashes Scissors","Lizard Poisons Spock","It is a Draw"}};
    bool gameRun = true;
    char playAgain;
    bool playerPick = true;
    int playerChoice = 0;
    int cpuChoice = 0;
    int gameResults = 0;
    int gameResult2 = 0;
    srand(time(0));


    cout<<"Welcome to Rock, Paper, Scissors, Lizard, Spock."<<endl;
    cout <<"\n Rules of the game : " << endl;
    cout <<"\n Scissors cuts Paper, Paper covers Rock, Rock crushes Lizard, Lizard poisons Spock, Spock smashes" << endl;
    cout <<" Scissors, Scissors decapitates Lizard, Lizard eats Paper, Paper disproves Spock, Spock vaporizes Rock, Rock crushes" << endl;
    cout <<" Scissors " << endl;

    while (gameRun == true)
    {
        cout<<"\n\n1=Rock, 2=Paper, 3=Scissors, 4=Lizard, 5=Spock"<<endl;
        while (playerPick == true)
        {
            cout<<"Which do you choose:";
            cin>>playerChoice;
            if (playerChoice == 1){cout<<"\nYou chose Rock."<<endl; playerPick = false;}
            else if (playerChoice == 2){cout<<"\nYou chose Paper."<<endl; playerPick = false;}
            else if (playerChoice == 3){cout<<"\nYou chose Scissors."<<endl; playerPick = false;}
            else if (playerChoice == 4){cout<<"\nYou chose Lizard."<<endl; playerPick = false;}
            else if (playerChoice == 5){cout<<"\nYou chose Spock."<<endl; playerPick = false;}
            else {cout<<"Please enter a number between 1 and 5"<<endl; playerPick = true;}
        }
        Sleep(1000);
        cpuChoice = rand() % 4 + 1;

        if (cpuChoice == 1){cout<<"\nThe computer choses Rock."<<endl; playerPick = false;}
        else if (cpuChoice == 2){cout<<"\nThe computer choses Paper."<<endl; playerPick = false;}
        else if (cpuChoice == 3){cout<<"\nThe computer choses Scissors."<<endl; playerPick = false;}
        else if (cpuChoice == 4){cout<<"\nThe computer choses Lizard."<<endl; playerPick = false;}
        else if (cpuChoice == 5){cout<<"\nThe computer choses Spock."<<endl; playerPick = false;}

        gameResults = rpsls[playerChoice-1][cpuChoice-1];
        if (gameResults == -1){cout<<"\nYou lose"<<endl;}
        if (gameResults == 1){cout<<"\nYou win"<<endl;}
        cout<<gameOutcome[playerChoice-1][cpuChoice-1]<<endl;

        cout<<"\nWould you like to play again (y/n):";
        cin>> playAgain;
        if (playAgain == 'y'){gameRun = true; playerPick = true;}
        if (playAgain == 'n'){gameRun = false;}
    }
    return 0;
}
