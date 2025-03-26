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
  int k, l, m, n, d, i = 1, count = 0;
  std::cin >> k >> l >> m >> n >> d;

  std::vector<bool> dragons(d, 0);

  while (k * i <= d)
  {
    dragons[k * i - 1] = 1;
    i++;
  }

  i = 1;

  while (l * i <= d)
  {
    dragons[l * i - 1] = 1;
    i++;
  }

  i = 1;

  while (m * i <= d)
  {
    dragons[m * i - 1] = 1;
    i++;
  }

  i = 1;

  while (n * i <= d)
  {
    dragons[n * i - 1] = 1;
    i++;
  }

  for (int i = 0; i < d; ++i)
    if (dragons[i])
      count++;

  std::cout << count << std::endl;

  return 0;
}