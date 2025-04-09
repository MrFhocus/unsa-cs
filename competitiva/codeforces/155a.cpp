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
  int n, l, h, a, c = 0;
  std::cin >> n >> a;
  l = a;
  h = a;
  n--;

  while (n--)
  {
    std::cin >> a;
    if (a < l || a > h)
    {
      c++;
      l = std::min(l, a);
      h = std::max(h, a);
    }
  }

  std::cout << c << std::endl;
}