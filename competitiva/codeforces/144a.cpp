#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <fstream>
#include <sstream>
#include <iterator>
#include <utility>
#include <functional>
#include <ctime>
#include <cassert>
#include <memory>
#include <numeric>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <chrono>
#include <locale>
#include <limits>
#include <type_traits>
#include <exception>
#include <stdexcept>

int main()
{
  int n, h, l, hi, li;
  std::cin >> n;

  std::vector<int> a(n);
  for (int i = 0; i < n; ++i)
    std::cin >> a[i];

  h = a[0];
  l = a[0];
  hi = 0;
  li = 0;

  for (int i = 1; i < n; ++i)
  {
    if (a[i] > h)
    {
      h = a[i];
      hi = i;
    }
    if (a[i] <= l)
    {
      l = a[i];
      li = i;
    }
  }

  if (li > hi)
    std::cout << (n - 1 - li) + hi << std::endl;
  else
    std::cout << (n - 1 - li) + hi - 1 << std::endl;

  return 0;
}