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
  int n;
  std::cin >> n;

  if (n % 2 == 0)
    std::cout << n + 2 << std::endl;
  else
    std::cout << n + 1 << std::endl;
}

int main()
{
  int t;
  std::cin >> t;

  while (t--)
    solve();
}