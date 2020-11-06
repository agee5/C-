#include <iostream>
using namespace std;
/******************************************************************
 Author : AJ Gee
 Date : 2/12/2019
 Name : makescents.cpp
 Description : Calculates value of loose change in cents
******************************************************************/

const int Quarter = 25;
const int Dime = 10;
const int Nickel = 5;
const int Penny = 1;
//Declaring all of my constants for value of each coin

int main()
//Starting main function
{
    int myQuarter = 0;
    int myDime = 0;
    int myNickel = 0;
    int myPenny = 0;
    double myDollars = 0;
    int yesno = 1;
    //Declaring all variables that we will be using


    cout << "This program will count all of your loose change for you."<<endl;
    cout << "Press enter to begin: ";
    cin.ignore();       //This ignores what the user inputs, and will start the rest of program


    cout << "\nFirst we are going to start with Quarters, how many do you have: ";
    cin >> myQuarter;          //user input for how many quarters they have
    int quarterFinal = myQuarter*Quarter;
    // Multiplying the number of quarters by the value of a quarter and then using that number
    //for the variable quarterFinal
    cout << "Ok, so you have "<< quarterFinal << " cents in Quarters."<<endl <<endl;
    //Telling the user how much all their quarters add up to


    cout << "Let's move on to Dimes, how many dimes do you have: ";
    cin >> myDime;          //user input for how many dimes they have
    int dimeFinal = myDime*Dime;
    //Multiplying the number of dimes by the value of a dime and then using that number
    //for the variable dimeFinal
    cout << "You have " << dimeFinal << " cents in Dimes."<<endl <<endl;


    cout << "How many Nickels do you have: ";
    cin >> myNickel;        //user input for how many nickels they have
    int nickelFinal = myNickel*Nickel;
    //Multiplying the number of nickels by the value of a nickel and then using that number
    //for the variable nickelFinal
    cout << "You have " << nickelFinal << " cents in Nickels."<<endl <<endl;


    cout << "And finally how many Pennies do you have: ";
    cin >> myPenny;     //user input for how many pennies they have
    int pennyFinal = myPenny*Penny;
    //Multiplying the number of pennies by the value of a penny and then using that number
    //for the variable pennyFinal
    cout << "You have " << pennyFinal << " cents in Pennies."<<endl <<endl;


    int changeTotal = quarterFinal + dimeFinal + nickelFinal + pennyFinal;
    //adding the totals of each to get final variable changeTotal
    cout << "You have a total of " << changeTotal << " cents."<<endl;
    myDollars = changeTotal/100.00;
    cout << "That makes $"<< myDollars << "."<<endl;
    cout<<"Is that all?"<<endl;
    cin>>yesno;


    return 1;
}
