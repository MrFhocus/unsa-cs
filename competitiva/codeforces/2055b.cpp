#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>
#include <vector>

#define llong long long
#define ulong unsigned long long
#define mk(a, b) std::make_pair(a, b)
#define f first
#define s second
#define sortInc(v) std::sort(v.begin(), v.end())
#define sortIncX(v, x) std::sort(v.begin() + x, v.end())
#define sortDec(v) std::sort(v.begin(), v.end(), std::greater<int>())
#define sortDecX(v, x) std::sort(v.begin() + x, v.end(), std::greater<int>())

void solve()
{
  int n;
  std::cin >> n;

  std::vector<int> a(n), b(n);
  for (int &x : a)
    std::cin >> x;
  for (int &x : b)
    std::cin >> x;

  std::vector<int> c(n);
  for (int i = 0; i < n; ++i)
    c[i] = a[i] - b[i];

  sortInc(c);

  std::cout << (c[0] + c[1] < 0 ? "NO" : "YES") << std::endl;
}

int main()
{
  llong t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}