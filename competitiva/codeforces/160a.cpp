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

int main()
{
  int n, a, i = 0, total = 0;
  std::vector<int> coins;
  std::cin >> n;

  while (n--)
  {
    std::cin >> a;
    coins.push_back(a);
    total += a;
  }

  n = 0;
  total = total / 2;

  std::sort(coins.begin(), coins.end(), std::greater<int>());

  while (n <= total)
  {
    n += coins[i];
    i++;
  }

  std::cout << i << std::endl;
}