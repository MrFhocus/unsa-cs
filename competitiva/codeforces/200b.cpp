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
  int n, aux;
  double res;
  std::cin >> n;

  for (int i = 0; i < n; ++i)
  {
    std::cin >> aux;
    res += 1 / (100.0 / aux);
  }

  std::cout << res / n * 100 << std::endl;

  return 0;
}