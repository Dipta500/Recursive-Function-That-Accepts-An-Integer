#include <iostream>

using namespace std;

int func (int num)
{
  int res = 0;
  while (num != 0)
    {
      if (num % 10 == 5)
	{
	  res++;
	}
      num = num / 10;
    }
  return res;
}

int main ()
{
  cout << "Input" << " " << "Output\n";
  cout << "2352" << " " << func (2352) << endl;
  cout << "13" << " " << func (13) << endl;
  cout << "52558" << " " << func (52558) << endl;
  cout << "55555" << " " << func (55555) << endl;
  return 0;
}



