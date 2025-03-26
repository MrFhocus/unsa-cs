#include <iostream>
#include <map>

std::map<std::string, std::string> gems = {
    {"purple", "Power"},
    {"green", "Time"},
    {"blue", "Space"},
    {"red", "Reality"},
    {"yellow", "Mind"},
    {"orange", "Soul"},
};

int main()
{
  int n;
  std::string s;

  std::cin >> n;

  int absent = 6 - n;

  while (n--)
  {
    std::cin >> s;
    gems[s] = "already";
  }

  std::cout << absent << std::endl;
  for (auto it = gems.begin(); it != gems.end(); ++it)
  {
    if (it->second != "already")
      std::cout << it->second << std::endl;
  }

  return 0;
}