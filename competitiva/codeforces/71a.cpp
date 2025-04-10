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
  std::string s;
  std::cin >> s;

  if (s.size() > 10)
    std::cout << s.front() + std::to_string(s.size() - 2) + s.back() << std::endl;
  else
    std::cout << s << std::endl;
}

int main()
{
  int t;
  std::cin >> t;

  while (t--)
    solve();
}