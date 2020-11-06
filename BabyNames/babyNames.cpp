#include <fstream>
#include <string>
#include <iostream>
using namespace std;

/******************************************************************
 Author : AJ Gee
 Date : 3/26/2019
 Name : babyNames.cpp
 Description : Tells how popular the name you choose is
******************************************************************/

int main()
{
    ifstream fin;
    int rank1 = 0;
    string bName;
    string gName;
    string babyName;
    bool foundGirl = false;
    bool foundBoy = false;
    int boyRank = 0;
    int girlRank = 0;
    fin.open("babynames2012.txt");
    if (!fin)
    {
        cout << "Unable to open file"<<endl;
    }

    cout<<"Please enter a name (capitalize first letter):";
    cin>> babyName;
    while (fin >> rank1 >> bName >> gName)
    {
        if (bName == babyName)
        {
            foundBoy = true;
            boyRank = rank1;
        }
        if(gName == babyName)
        {

            foundGirl = true;
            girlRank = rank1;
        }

        if(foundGirl == true && foundBoy == true)
            break;
    }
     if (foundBoy == true)
    {
        cout<< babyName <<" is the "<< boyRank <<" most popular boys name."<<endl;
    }
    else
        cout<<babyName<<" is not a popular boys name."<<endl;
    if (foundGirl == true)
    {
        cout<< babyName <<" is the "<< girlRank <<" most popular girls name."<<endl;
    }
    else
        cout<<babyName<<" is not a popular girls name."<<endl;
    fin.close();

    return 0;
}

