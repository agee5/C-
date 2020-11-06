#ifndef _HTMLTABLE_H_
#define _HTMLTABLE_H_
#include <string>

class HTMLTable
{
	public:
	  HTMLTable (int row = 4, int col = 4);
	  void print();
	  void insert(int row, int col, std::string inpt);
	  //void borderon();
	  //void borderoff();
	  

	private:
	  std::string m_Table[100][100];
	  int m_rows = row;
	  int m_cols = col;
	  //bool borderState;
};

#endif
