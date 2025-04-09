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
  int n, ai, bi, c = 0, max = 0;
  std::cin >> n;

  while (n--)
  {
    std::cin >> ai >> bi;
    c -= ai;
    c += bi;
    max = std::max(c, max);
  }

  std::cout << max << std::endl;
}
