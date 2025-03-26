#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int n, x;
  std::cin >> n >> x;

  std::vector<int> a(n);

  for (int i = 0; i < n; ++i)
    std::cin >> a[i];

  std::sort(a.begin(), a.end());

  int cant = 0, l = 0, r = n - 1;

  while (l <= r)
  {
    if (a[l] + a[r] <= x)
    {
      cant++;
      l++;
      r--;
    }
    else
    {
      cant++;
      r--;
    }
  }

  std::cout << cant << std::endl;

  return 0;
}