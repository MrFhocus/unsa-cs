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
  int n, li, ri;
  std::cin >> n;

  std::vector<int> l(2, 0), r(2, 0);

  while (n--)
  {
    std::cin >> li >> ri;
    l[li]++;
    r[ri]++;
  }

  std::cout << std::min(l[0], l[1]) + std::min(r[0], r[1]) << std::endl;
}