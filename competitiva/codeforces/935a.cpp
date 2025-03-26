#include <iostream>

int main()
{
  int n;
  std::cin >> n;

  int cant = 1;
  int d = 2;
  int last = n;

  while (d < last)
  {
    if (n % d == 0)
    {
      cant++;
      last = n / d;
    }
    d++;
  }

  d--;

  std::cout << cant * 2 - (d == last ? 2 : 1) << std::endl;
}