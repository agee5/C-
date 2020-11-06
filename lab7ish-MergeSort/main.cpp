#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cstdio>
#include <sstream>
#include <sys/time.h>
#include <stdio.h>
#include <unistd.h>
#include "linkedlist.h"
#include <math.h>

using namespace std;

int main()
{
    LinkedList ll;
    ifstream dataFile;
    string fileName;
    string word;
    int a;
    double actualTime;
    double elapsedTime;
    int maxDataSize = 1000000;

    //Open data file that output will be sent to
    ofstream datafile("datafile.csv");
    
    //Loop that controls how many lists the program will make
    for (int i=0; i<200; i++)
    {
         //Loop that will create the data that will go into the list
         for (int dataSize=0; dataSize<=maxDataSize;dataSize+=50)
         {
	     //Creating random strings to input into list
	     int a = rand();
    	     stringstream ss;
	     ss << a;
	     string str = ss.str();
	     ll.insertAtBack(str);
         }

         //Starting timer to see how long it takes to sort list
         //This version will only work on Linux
	 struct timeval start, end;
         double mtime, seconds, useconds;
         gettimeofday(&start, NULL);
         
         //Sorting the data in list
	 ll.mergeSort();
         
         //Stopping the timer
	 gettimeofday(&end, NULL);
         seconds = end.tv_sec - start.tv_sec;
         useconds = end.tv_usec - start.tv_usec;

         //Converting the time into milliseconds
	 mtime = ((seconds) * 1000.0 + useconds/1000.0) + 0.5;
	 //Converting the time to show seconds and rounded to the nearest 10th
	 actualTime = mtime/1000.0;
         elapsedTime = roundf(actualTime * 10)/10;

	 //Output the size of data and time to sort to datafile.txt and to console window
	 datafile << maxDataSize << " " << elapsedTime << endl;
	 cout << maxDataSize << " " << elapsedTime << endl;
	 
	 //Increasing the size of data in list so it continues to grow larger
	 maxDataSize = maxDataSize*1.005;
    }
    //Closing the file
    datafile.close();
    
    return 0;
}






















