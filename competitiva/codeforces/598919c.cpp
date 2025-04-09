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
  int a, b, n;
  std::cin >> a >> b >> n;

  a *= n;
  b *= n;

  a += b / 100;
  b %= 100;

  std::cout << a << " " << b << std::endl;
}

int main()
{
  int t;
  std::cin >> t;

  while (t--)
    solve();
}