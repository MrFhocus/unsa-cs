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

  std::set<char> aux;

  for (char c : s)
    aux.insert(c);

  if (aux.size() % 2 == 0)
    std::cout << "CHAT WITH HER!" << std::endl;
  else
    std::cout << "IGNORE HIM!" << std::endl;
}