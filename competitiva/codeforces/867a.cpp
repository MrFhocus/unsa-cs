#include <iostream>

int main()
{
  int n;
  char c;
  char current;
  int toF = 0, toS = 0;

  std::cin >> n >> current;

  while (--n)
  {
    std::cin >> c;
    if (c != current)
    {
      if (c == 'F')
        toF++;
      else if (c == 'S')
        toS++;
    }
    current = c;
  }

  std::cout << (toF > toS ? "YES" : "NO") << std::endl;

  return 0;
}