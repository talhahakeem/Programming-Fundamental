#include <iostream>
using namespace std;
int main()
{
  int check = 0;
  for (int i = 1; i <= 100; i++)
  {

    for (int j = 1; j <= i; j++)
    {
      if (i % j == 0)
      {
        check++;
      }
      else
      {
        check = check;
      }
    }
    if (check == 2)
    {
      cout << i << endl;
    }
    check = 0;
  }

  return 0;
}