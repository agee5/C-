#include <iostream>
#include <string>
#include "HTMLTable.h"
#include "HTMLTable.cpp"

using namespace std;


int main()
{
	cout << "Content-type: text/html" << endl << endl;
	HTMLTable nc(3,3);

	//nc.borderoff();
	nc.insert(1,1, "red");
	nc.insert(1,2, "blue");
	nc.insert(1,3, "green");
	nc.insert(2,1, "yellow");
	nc.insert(2,2, "Aaron Gee");
	nc.insert(2,3, "purple");
	nc.insert(3,1, "pink");
	nc.insert(3,2, "black");
	nc.insert(3,3, "white");
	nc.print();
	

	HTMLTable ch(2,8);

	//ch.borderon();
	ch.insert(1,1, "rook");
	ch.insert(1,2, "knight");
	ch.insert(1,3, "bishop");
	ch.insert(1,4, "king");
	ch.insert(1,5, "queen");
	ch.insert(1,6, "bishop");
	ch.insert(1,7, "knight");
	ch.insert(1,8, "rook");
	ch.insert(2,1, "pawn");
	ch.insert(2,2, "pawn");
	ch.insert(2,3, "pawn");
	ch.insert(2,4, "pawn");
	ch.insert(2,5, "pawn");
	ch.insert(2,6, "pawn");
	ch.insert(2,7, "pawn");
	ch.insert(2,7, "pawn");
	ch.print();


	HTMLTable ig(2,2);

	//borderoff();
	ig.insert(1,1, "<img src='1.jpg' />");
	ig.insert(1,2, "<img src='1.jpg' />");
	ig.insert(2,1, "<img src='1.jpg' />");
	ig.insert(2,2, "<img src='1.jpg' />");
	ig.print();

	return 0;
}














