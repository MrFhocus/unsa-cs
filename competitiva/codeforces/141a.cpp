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
  std::string huesped, anfitrion, pila, mergeS;
  std::cin >> huesped >> anfitrion >> pila;

  mergeS = huesped + anfitrion;

  std::sort(mergeS.begin(), mergeS.end());
  std::sort(pila.begin(), pila.end());

  if (mergeS == pila)
    std::cout << "YES" << std::endl;
  else
    std::cout << "NO" << std::endl;
}