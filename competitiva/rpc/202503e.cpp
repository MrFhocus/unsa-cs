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
  int cc, cm, cy, ck;
  std::cin >> cc >> cm >> cy >> ck;
  int vc, vm, vy, vk;
  std::cin >> vc >> vm >> vy >> vk;

  int h, w;
  std::cin >> h >> w;

  std::map<char, int> image = {
      {'W', 0},
      {'R', 0},
      {'G', 0},
      {'B', 0},
      {'C', 0},
      {'M', 0},
      {'Y', 0},
      {'K', 0},
  };

  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      char c;
      std::cin >> c;
      image[c]++;
    }
  }

  int costFinal = 0;
  costFinal += image['C'] * cc;
  vc -= image['C'];
  costFinal += image['M'] * cm;
  vm -= image['M'];
  costFinal += image['Y'] * cy;
  vy -= image['Y'];

  costFinal += (image['R'] * cm) + (image['R'] * cy);
  vm -= image['R'];
  vy -= image['R'];
  costFinal += (image['G'] * cc) + (image['G'] * cy);
  vc -= image['G'];
  vy -= image['G'];
  costFinal += (image['B'] * cm) + (image['B'] * cc);
  vm -= image['B'];
  vc -= image['B'];

  int costMinK = std::min(ck, (cm + cy + cc));
  int costMaxK = std::max(ck, (cm + cy + cc));
  int minUseK = std::min(vc, std::min(vm, vy));

  if (ck < (cm + cy + cc))
  {
    if (vk >= image['K'])
    {
      costFinal += image['K'] * costMinK;
    }
    else
    {
      costFinal += vk * costMinK;
      costFinal += (image['K'] - vk) * costMaxK;
    }
  }
  else
  {
    if (minUseK >= image['K'])
    {
      costFinal += image['K'] * costMinK;
    }
    else
    {
      costFinal += minUseK * costMinK;
      costFinal += (image['K'] - minUseK) * costMaxK;
    }
  }

  std::cout << costFinal << std::endl;
}