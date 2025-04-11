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
  int a;
  std::vector<int> v;
  for (int i = 0; i < 3; i++)
  {
    std::cin >> a;
    v.push_back(a);
  }

  std::sort(v.begin(), v.end());

  int total = 0;

  for (int i = 0; i < 3; i++)
  {
    if (v[i] == 1 || total <= 1)
      total += v[i];
    else
      total *= v[i];
  }

  std::cout << total << std::endl;
}