#include <iostream>
#include <string>

int main()
{
  int n;
  char c;

  std::cin >> n;

  int zero = 0;
  int one = 0;

  while (n--)
  {
    std::cin >> c;
    if (c == 'z')
      zero++;
    else if (c == 'n')
      one++;
  }

  for (int i = 0; i < one; i++)
    std::cout << "1 ";

  for (int i = 0; i < zero; i++)
    std::cout << "0 ";

  std::cout << std::endl;

  return 0;
}