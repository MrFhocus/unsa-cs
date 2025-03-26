#include <iostream>
#include <set>

int main()
{
  int n;
  std::cin >> n;
  std::set<int> s;

  for (int i = 0; i < n; ++i)
  {
    int x;
    std::cin >> x;
    s.insert(x);
  }

  std::cout << s.size() << std::endl;

  return 0;
}