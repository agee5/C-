#include <iostream>

using namespace std;

/******************************************************************
 Author : AJ Gee
 Date : 2/21/2019
 Name : LAB2BAG.cpp
 Description : Calculates how many slices of pizza
******************************************************************/


int main ()
{
    int i = 0;

    //This is for the top two rows of what will be my table
    cout<<"**********************************"<<endl;
    cout<<"*   Pizza Size   *    Pieces     *"<<endl;

    //This loop will start at the smallest size of pizza which is 6in and go up to 20in
    for (i = 6; i <= 20; i++){

        cout<<"*\t"<< i << "\t * \t" << (i*i)/18 <<"\t *"<<endl;
        //(i * i)/18 is the simplification of dividing the area of pizza by the area of the size of a piece of pizza
        //we knew that in a 6in pizza you could fit exactly 2 pieces, so i used that to find the area of a slice

    }

    cout<<"**********************************"<<endl;

    return 0;
}
