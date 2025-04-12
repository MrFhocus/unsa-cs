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
  int k;
  std::cin >> k;
  if (k % 2 == 0)
    std::cout << "NO" << std::endl;
  else
    std::cout << "YES" << std::endl;
}

int main()
{
  int t;
  std::cin >> t;

  while (t--)
    solve();
}