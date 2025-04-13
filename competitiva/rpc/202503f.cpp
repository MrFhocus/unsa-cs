#include <bits/stdc++.h>

std::vector<bool> visits;
std::vector<std::vector<int>> la;
std::map<std::pair<int, int>, int> help;
using namespace std;

void visitGraph(int v, long long int &e, long long int &nodes)
{
  visits[v] = 1;
  nodes++;

  for (int i = 0; i < la[v].size(); i++)
  {
    int neighbor = la[v][i];
    if (!(help[make_pair(v, neighbor)] == 1 || help[make_pair(neighbor, v)] == 1))
    {
      e++;
      help[make_pair(v, neighbor)] = 1;
      help[make_pair(neighbor, v)] = 1;
    }
    if (!visits[neighbor])
    {
      visitGraph(neighbor, e, nodes);
    }
  }
}

int main()
{
  long long int n, m, vi, vj;
  std::cin >> n >> m;

  la.resize(n, std::vector<int>());
  visits.resize(n, 0);

  while (m--)
  {
    std::cin >> vi >> vj;
    vi--;
    vj--;
    la[vi].push_back(vj);
    la[vj].push_back(vi);
  }

  int newFriends = 0;

  for (int i = 0; i < n; i++)
  {
    long long int e = 0, nodes = 0;
    if (visits[i])
      continue;
    visitGraph(i, e, nodes);
    if (nodes == 1)
      continue;
    newFriends += ((nodes * (nodes - 1)) / 2) - e;
  }

  std::cout << newFriends << std::endl;
}