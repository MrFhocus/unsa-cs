#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int n, m, k;
  std::cin >> n >> m >> k;

  std::vector<int> a(n), b(m);

  for (int i = 0; i < n; ++i)
    std::cin >> a[i];

  for (int i = 0; i < m; ++i)
    std::cin >> b[i];

  std::sort(a.begin(), a.end());
  std::sort(b.begin(), b.end());

  int i = 0, j = 0, cant = 0;

  while (i < n && j < m)
  {
    if (std::abs(a[i] - b[j]) <= k)
    {
      cant++;
      i++;
      j++;
    }
    else if (a[i] < b[j])
    {
      i++;
    }
    else
    {
      j++;
    }
  }

  std::cout << cant << std::endl;

  return 0;
}