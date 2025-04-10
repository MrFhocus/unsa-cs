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

  if (s.find("H") != s.npos)
    std::cout << "YES" << std::endl;
  else if (s.find("Q") != s.npos)
    std::cout << "YES" << std::endl;
  else if (s.find("9") != s.npos)
    std::cout << "YES" << std::endl;
  else
    std::cout << "NO" << std::endl;
}