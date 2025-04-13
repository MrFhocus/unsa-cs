#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <functional>
#include <iterator>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <deque>
#include <fstream>
#include <sstream>
#include <chrono>
#include <thread>
#include <mutex>
#include <condition_variable>

void solve()
{
  int n, c, d;
  std::cin >> n >> c >> d;
  std::vector<int> b(n * n);
  std::vector<int> comps(n * n - 1);

  bool flag = 1;

  for (int &bi : b)
    std::cin >> bi;

  std::sort(b.begin(), b.end());

  for (int i = 1; i < n * n; i++)
    comps[i - 1] = b[i] - b[i - 1];

  for (int l = 0; l < n * n - 1 && flag; l++)
  {
    int r = (n * n - 1) - 1 - l;
    if (comps[l] != comps[r])
      flag = 0;
  }

  std::cout << (flag ? "YES" : "NO") << std::endl;
}

int main()
{
  int t;
  std::cin >> t;

  while (t--)
    solve();
}