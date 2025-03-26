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

void solve()
{
  int l, r, d, u;
  std::cin >> l >> r >> d >> u;

  if (l == r && r == d && d == u)
    std::cout << "YES" << std::endl;
  else
    std::cout << "NO" << std::endl;
}

int main()
{
  int t;
  std::cin >> t;

  while (t--)
    solve();

  return 0;
}