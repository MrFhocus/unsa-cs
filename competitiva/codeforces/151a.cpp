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
  int n, k, l, c, d, p, nl, np;
  std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  int cantMili = (k * l) / nl;
  int cantLima = c * d;
  int cantSal = p / np;

  std::cout << std::min(std::min(cantMili, cantLima), cantSal) / n << std::endl;
}