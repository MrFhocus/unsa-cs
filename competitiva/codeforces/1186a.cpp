#include <iostream>

int main()
{
  int n, m, k;
  std::cin >> n >> m >> k;

  if (m >= n && k >= n)
  {
    std::cout << "YES" << std::endl;
  }
  else
  {
    std::cout << "NO" << std::endl;
  }
  return 0;
}