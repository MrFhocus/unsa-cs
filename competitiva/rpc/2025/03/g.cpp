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

int n;
std::string s;

std::vector<std::vector<long long int>> memo;

long long int getPaths(int i, int j)
{
  if (i >= n)
    return 1;
  if (s[i] == '#')
    return 0;
  if (memo[i][j - 2])
    return memo[i][j - 2];
  memo[i][j - 2] = getPaths(i + 1, j) + getPaths(i + j, j + 1);
  return memo[i][j - 2];
}

int main()
{
  std::cin >> n >> s;
  memo.resize(n + 1, std::vector<long long int>(n, 0));
  long long int paths = getPaths(0, 2);
  paths = paths % (1000000000 + 7);
  std::cout << paths << std::endl;

  std::cout << std::endl;

  for (int i = 0; i < n + 1; i++)
  {
    for (int j = 0; j < n; j++)
    {
      std::cout << memo[i][j] << " ";
    }
    std::cout << std::endl;
  }
}