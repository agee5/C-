#include <iostream>
#include "display.h"

using namespace std;
int main()
{
  Display d;
  d.init();
  d.print("ONE TWO THREE FOUR!");
  d.show();
  for (int i=0;i<10000000;i++);  // pause
}
