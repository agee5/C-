#include <iostream>
#include "redclicker.h"

using namespace std;

RedClicker::RedClicker()
{
  reset ();
}

void RedClicker::reset()
{
  m_counterValue = 0;


}

void RedClicker::display()
{
  cout << endl << "***       " << m_counterValue << "	***" << endl;

}
