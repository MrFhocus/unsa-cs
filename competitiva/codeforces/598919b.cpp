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
  std::string num;
  std::cin >> num;

  if (num.size() == 1)
    std::cout << 0 << std::endl;
  else
    std::cout << num.at(num.size() - 2) << std::endl;
}