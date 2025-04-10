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
  int n;
  std::cin >> n;

  int res = 0;

  while (n--)
  {
    int cant = 0;
    int a;
    for (int i = 0; i < 3; i++)
    {
      std::cin >> a;
      cant += a;
    }

    if (cant >= 2)
      res++;
  }

  std::cout << res << std::endl;
}