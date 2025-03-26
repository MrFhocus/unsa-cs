#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

template <typename T>
T binary_search(const std::vector<T> &a, T x)
{
  int l = -1, r = a.size();
  while (l + 1 < r)
  {
    int m = r - (r - l) / 2;
    if (a[m] <= x)
      l = m;
    else
      r = m;
  }
  return l;
}

int main()
{
  int n, m, aux;
  std::cin >> n >> m;

  std::map<int, int> memo;
  std::set<int> hs;

  for (int i = 0; i < n; ++i)
  {
    std::cin >> aux;
    hs.insert(aux);
    memo[aux]++;
  }
  std::vector<int> h(hs.begin(), hs.end());

  std::sort(h.begin(), h.end());

  while (m--)
  {
    std::cin >> aux;
    int i = binary_search(h, aux);

    if (i == -1)
      std::cout << "-1" << std::endl;
    else
    {
      memo[h[i]]--;
      std::cout << h[i] << std::endl;
      if (memo[h[i]] == 0)
      {
        h.erase(h.begin() + i);
        memo.erase(h[i]);
      }
    }
  }

  return 0;
}