#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand((int)time(0));
  int total = 0;
  int a = 0;
  int r = 0;

   r = (rand() % 6) + 1;
    cout <<"Dice1 = " << r << endl;
   
   a = (rand() % 6) + 1;
    cout << "Dice2 = " << a << endl;

total=r + a;
cout << "        __" << endl;
cout << "Total = "<< total;
  return 0;
}
