#include <iostream>

void solve()
{
  int a, b, c, d, k, x, y;
  std::cin >> a >> b >> c >> d >> k;

  x = (a % c == 0) ? a / c : a / c + 1;
  y = (b % d == 0) ? b / d : b / d + 1;

  if (x + y <= k)
    std::cout << x << " " << y << std::endl;
  else
    std::cout << "-1" << std::endl;
}

int main()
{
  int t;
  std::cin >> t;

  while (t--)
    solve();

  return 0;
}