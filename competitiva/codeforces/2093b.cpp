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

  int cantNums = 0;
  int cantZeroRight = 0;

  for (char c : s)
  {
    if (c != '0')
      cantNums++;
  }
  cantNums--;

  for (int i = s.size() - 1; i >= 0; i--)
  {
    if (s[i] != '0')
      break;
    cantZeroRight++;
  }

  std::cout << cantNums + cantZeroRight << std::endl;
}

int main()
{
  int t;
  std::cin >> t;

  while (t--)
    solve();
}