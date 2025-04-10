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
  std::string s;
  std::cin >> s;

  int aux[3] = {0, 0, 0};

  for (char c : s)
  {
    if (c == '+')
      continue;

    aux[c - '1']++;
  }

  s.clear();

  for (int i = 0; i < 3; i++)
  {
    while (aux[i]--)
    {
      char c = '1' + i;
      if (s.empty())
        s += c;
      else
      {
        s += '+';
        s += c;
      }
    }
  }

  std::cout << s << std::endl;
}