#include <iostream>
#include <cctype>
#include <fstream>
#include <cstdlib>

using namespace std;

/******************************************************************
 Author : AJ Gee
 Date : 4/23/2019
 Name : LAB7AaronGee.cpp
 Description : Bowling Project
******************************************************************/

void score(int pin[],int frame[]);
void cleanFile();
void fillArray(int array[]);
const int frameSize = 11;
const int pinSize = 21;


int main()
{
    int pin[pinSize] = {0};
    int frame[frameSize] = {0};
    cleanFile();
    fillArray(pin);
    score(pin, frame);
}


void score(int pin[], int frame[])
{
    int i = 0;
    int j = 1;
    for(j = 1; j < frameSize; j++)
    {
       if(pin[i] == 10)
       {
           frame[j] = frame[j - 1] + pin[i] + pin[i + 1] + pin[i + 2];
           i++;
       }
       else if(pin[i] + pin[i + 1] == 10)
       {
           frame[j] = frame[j - 1] + pin[i] + pin[i + 1] + pin[i + 2];
           i += 2;
       }
       else
       {
           frame[j] = frame[j - 1] + pin[i] + pin[i + 1];
           i += 2;
       }
       cout << "Your score was " << frame[j] << ".\n";
    }
}


void cleanFile()
{
    char ch;
    ifstream fin("lane9.txt");
    ofstream fout("cleanlane9.txt");
    if(!fin || !fout)
    {
        cout << "Could not find either the input or output files. Please check to make sure the are in the same folder as the program." << endl;
        exit(-1);
    }
    else
    {
        while(!fin.eof())
        {
            fin.get(ch);
            if (isdigit(ch))
            {
                fout << ch;
            }
            else if(isspace(ch))
            {
                fout << ch;
            }
            else
            {
                continue;
            }
        }
    }
    fin.close();
}


void fillArray(int pin[])
{
    int temp;
    int i = 0;
    ifstream fin("cleanlane9.txt");
    while(!fin.eof())
    {
        fin >> temp;
        cout << temp << endl;
        pin[i] = temp;
        i++;
    }
}
