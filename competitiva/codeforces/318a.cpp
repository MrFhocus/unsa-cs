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
  long long int n, k;
  std::cin >> n >> k;

  long long int mid = n % 2 == 0 ? n / 2 : n / 2 + 1;

  if (k > mid)
    std::cout << (k - mid) * 2 << std::endl;
  else
    std::cout << k * 2 - 1 << std::endl;
}