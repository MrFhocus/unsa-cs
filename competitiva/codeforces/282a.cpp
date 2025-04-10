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
  int n, x = 0;
  std::cin >> n;

  while (n--)
  {
    std::string s;
    std::cin >> s;

    if (s.find("--") != s.npos)
      x--;
    else
      x++;
  }

  std::cout << x << std::endl;
}