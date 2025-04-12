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

bool isPrime(int n)
{
  if (n < 2)
    return 0;
  else if (n == 2)
    return 1;
  else if (n % 2 == 0)
    return 0;

  bool flag = 1;
  for (int i = 3; i <= std::sqrt(n) && flag; i += 2)
  {
    if (n % i == 0)
      flag = 0;
  }

  return flag;
}

void solve()
{
  int x, k;
  std::cin >> x >> k;

  if (k > 1)
    if (x == 1 && k == 2)
      std::cout << "YES" << std::endl;
    else
      std::cout << "NO" << std::endl;
  else
  {
    if (isPrime(x))
      std::cout << "YES" << std::endl;
    else
      std::cout << "NO" << std::endl;
  }
}

int main()
{
  int t;
  std::cin >> t;

  while (t--)
    solve();
}