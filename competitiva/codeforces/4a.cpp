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
  int t;
  std::cin >> t;

  if (t % 2 == 0 && t > 2)
  {
    std::cout << "YES" << std::endl;
  }
  else
  {
    std::cout << "NO" << std::endl;
  }
}