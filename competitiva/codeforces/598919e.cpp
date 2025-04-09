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
  int n, k;
  std::cin >> n >> k;

  if (n % k == 0)
    std::cout << 0 << std::endl;
  else
    std::cout << k - (n % k) << std::endl;
}

int main()
{
  int t;
  std::cin >> t;

  while (t--)
    solve();
}