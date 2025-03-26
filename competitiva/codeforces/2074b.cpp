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
  int n, aux, a, b, c;
  std::cin >> n;

  std::priority_queue<int, std::vector<int>, std::less<int>> pq;

  for (int i = 0; i < n; ++i)
  {
    std::cin >> aux;
    pq.push(aux);
  }

  while (pq.size() > 1)
  {
    a = pq.top();
    pq.pop();
    b = pq.top();
    pq.pop();

    c = a + b - 1;

    pq.push(c);
  }

  std::cout << pq.top() << std::endl;
}

int main()
{
  int t;
  std::cin >> t;

  while (t--)
    solve();

  return 0;
}