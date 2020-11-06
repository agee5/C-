#include <iostream>
#include <string>
#include "HTMLTable.h"

using namespace std;

HTMLTable::HTMLTable(int row, int col)
{
	int m_rows = row;
	int m_cols = col;
	string m_Table[row][col];
	//borderon();
}

void print()
{
	cout << "<table>";
	for (int rows=0;rows<m_rows;rows++)
	{
		cout << "<tr>";
		for (int cols=0;cols<m_cols;cols++)
		{
			cout << "<td>" ;
			cout << string m_Table[row][col];
			cout << "</td>" << endl;
		}
		cout << "</tr>";
	
	}
	cout << "</table>";



}

void insert(int row, int col, string inpt)
{
	string m_Table[row][col] = inpt;

}
//void borderon(){borderState = true;}

//void borderon(){borderState = false;}

