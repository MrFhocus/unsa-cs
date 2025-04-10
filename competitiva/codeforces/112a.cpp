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
  std::string s1, s2;
  std::cin >> s1 >> s2;

  std::transform(s1.begin(), s1.end(), s1.begin(),
                 [](unsigned char c)
                 { return std::tolower(c); });

  std::transform(s2.begin(), s2.end(), s2.begin(),
                 [](unsigned char c)
                 { return std::tolower(c); });

  int res = 0;

  for (int i = 0; i < s1.size(); i++)
  {
    if (s1[i] > s2[i])
    {
      res = 1;
      break;
    }
    else if (s1[i] < s2[i])
    {
      res = -1;
      break;
    }
  }

  std::cout << res << std::endl;
}