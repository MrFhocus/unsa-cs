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

void solve()
{
}

int main()
{
  int a, b;
  std::cin >> a >> b;

  int init = 2025;
  int days = 0;
  int step = 91;

  while (a > init)
  {
    init += step;
    step += 2;
  }

  while (init <= b)
  {
    days += 15;
    init += step;
    step += 2;
  }

  std::cout << days << std::endl;
}