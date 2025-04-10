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
  int s1, s2, s3, s4;
  std::cin >> s1 >> s2 >> s3 >> s4;

  std::set<int> herr;
  herr.insert(s1);
  herr.insert(s2);
  herr.insert(s3);
  herr.insert(s4);

  std::cout << 4 - herr.size() << std::endl;
}