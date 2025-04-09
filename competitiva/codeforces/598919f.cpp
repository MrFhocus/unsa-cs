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
  int a, b, l, n;
  std::cin >> a >> b >> l >> n;

  std::cout << (2 * l) + (2 * b * (n - 1)) + (2 * a * n - a) << std::endl;
}

int main()
{
  int t;
  std::cin >> t;

  while (t--)
    solve();
}