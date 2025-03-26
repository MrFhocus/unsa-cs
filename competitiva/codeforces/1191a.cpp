#include <iostream>

int main()
{
  int n;
  std::cin >> n;

  char *pos = new char[3];

  for (int i = 0; i < 3; i++)
  {
    if (((n + i) - 1) % 4 == 0)
      pos[i] = 'A';
    else if (((n + i) - 3) % 4 == 0)
      pos[i] = 'B';
    else if (((n + i) - 2) % 4 == 0)
      pos[i] = 'C';
    else if ((n + i) % 4 == 0)
      pos[i] = 'D';
  }

  int bestIndex = 0;
  char bestChar = 'D';

  for (int i = 0; i < 3; i++)
  {
    if (pos[i] < bestChar)
    {
      bestIndex = i;
      bestChar = pos[i];
    }
  }

  std::cout << bestIndex << " " << bestChar << std::endl;

  return 0;
}