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
  int n, p, q, a;
  std::set<int> levels;

  std::cin >> n;
  std::cin >> p;

  while (p--)
  {
    std::cin >> a;
    levels.insert(a);
  }

  std::cin >> q;

  while (q--)
  {
    std::cin >> a;
    levels.insert(a);
  }

  if (levels.size() == n)
    std::cout << "I become the guy." << std::endl;
  else
    std::cout << "Oh, my keyboard!" << std::endl;
}