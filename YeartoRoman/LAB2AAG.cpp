#include <iostream>
#include <string>
using namespace std;

/******************************************************************
 Author : AJ Gee
 Date : 2/19/2019
 Name : LAB2AAG.cpp
 Description : Converts a year/number between 1 and 3999 to Roman Numeral
******************************************************************/

const int M = 1000;
const int CM = 900;
const int D = 500;
const int CD = 400;
const int C = 100;
const int XC = 90;
const int L = 50;
const int XL = 40;
const int X = 10;
const int IX = 9;
const int V = 5;
const int IV = 4;
const int I = 1;

int main ()
{
    int year = 0;
    string roman ;

    cout << "Please enter a year: ";
    cin >> year;

    while (year > 0)
    {
        if (year >= M)
        {
            year -= M;
            roman += "M";
        }
        else if (year >= CM)
        {
            year -= CM;
            roman += "CM";
        }
        else if (year >= D)
        {
            year -= D;
            roman += "D";
        }
        else if (year >= CD)
        {
            year -= CD;
            roman += "CD";
        }
        else if (year >= C)
        {
            year -= C;
            roman += "C";
        }
        else if (year >= XC)
        {
            year -= XC;
            roman += "XC";
        }
        else if (year >= L)
        {
            year -= L;
            roman += "L";
        }
        else if (year >= XL)
        {
            year -= XL;
            roman += "XL";
        }
        else if (year >= X)
        {
            year -= X;
            roman += "X";
        }
        else if (year >= IX)
        {
            year -= IX;
            roman += "IX";
        }
        else if (year >= V)
        {
            year -= V;
            roman += "V";
        }
        else if (year >= IV)
        {
            year -= IV;
            roman += "IV";
        }
        else if (year >= I)
        {
            year -= I;
            roman += "I";
        }

    }

    cout << "\nThe year you entered is "<< roman <<" in Roman Numerals."<<endl;
}

