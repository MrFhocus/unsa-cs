#include <bits/stdc++.h>
using namespace ::std;

const int inf = 1e9 + 10;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int random(int l, int r)
{
  return uniform_int_distribution<int>(l, r)(rng);
}

struct node
{
  int priority;
  int amount;
  int index;
  int value;
  int maxi;
  int mini;
  long long sum_amounts;
  node *left;
  node *right;

  node(int amount, int value, int index) : amount(amount), value(value), index(index)
  {
    sum_amounts = amount;
    maxi = mini = value;
    priority = random(0, 1e9);
    left = right = nullptr;
  }
};

int maxi(node *t)
{
  return t ? t->maxi : -inf;
}

int mini(node *t)
{
  return t ? t->mini : inf;
}

long long sum_amounts(node *t)
{
  return t ? t->sum_amounts : 0;
}

void update(node *t)
{
  if (t)
  {
    t->sum_amounts = sum_amounts(t->left) + t->amount + sum_amounts(t->right);
    t->maxi = max(t->value, max(maxi(t->left), maxi(t->right)));
    t->mini = min(t->value, min(mini(t->left), mini(t->right)));
  }
}

node *merge(node *l, node *r)
{
  if (l == nullptr)
    return r;
  if (r == nullptr)
    return l;
  if (l->priority > r->priority)
  {
    l->right = merge(l->right, r);
    update(l);
    return l;
  }
  else
  {
    r->left = merge(l, r->left);
    update(r);
    return r;
  }
}

pair<node *, node *> split(node *t, int value, int idx)
{
  if (t == nullptr)
    return {nullptr, nullptr};
  if (make_pair(t->value, t->index) <= make_pair(value, idx))
  {
    pair<node *, node *> p = split(t->right, value, idx);
    t->right = p.first;
    update(t);
    return {t, p.second};
  }
  else
  {
    pair<node *, node *> p = split(t->left, value, idx);
    t->left = p.second;
    update(t);
    return {p.first, t};
  }
}

node *insert(node *T, int p, int a, int idx)
{
  pair<node *, node *> P = split(T, p, idx);
  T = merge(P.first, new node(a, p, idx));
  T = merge(T, P.second);
  return T;
}

node *remove(node *T, int p, int a, int idx)
{
  pair<node *, node *> P = split(T, p, idx);
  pair<node *, node *> P2 = split(P.first, p, idx - 1);
  T = merge(P2.first, P.second);
  return T;
}

node *get_max(node *t)
{
  return t->right ? get_max(t->right) : t;
}

node *get_min(node *t)
{
  return t->left ? get_min(t->left) : t;
}

node *get_leq(node *T, int bound, long long &res)
{
  pair<node *, node *> p = split(T, bound, inf);
  res = sum_amounts(p.first);
  T = merge(p.first, p.second);
  return T;
}

node *get_geq(node *T, int bound, long long &res)
{
  res = sum_amounts(T);
  pair<node *, node *> p = split(T, bound - 1, inf);
  res -= sum_amounts(p.first);
  T = merge(p.first, p.second);
  return T;
}

node *buys = nullptr;
node *sells = nullptr;
vector<tuple<int, int, int>> transactions;

void fix()
{
  while (maxi(buys) >= mini(sells))
  {
    node *buy = get_max(buys);
    node *sell = get_min(sells);
    int buy_value = buy->value;
    int buy_amount = buy->amount;
    int buy_index = buy->index;
    int sell_value = sell->value;
    int sell_amount = sell->amount;
    int sell_index = sell->index;
    buys = remove(buys, buy_value, buy_amount, buy_index);
    sells = remove(sells, sell_value, sell_amount, sell_index);
    int taken = min(buy_amount, sell_amount);
    transactions.emplace_back(abs(sell_index), abs(buy_index), taken);
    buy_amount -= taken;
    sell_amount -= taken;
    if (buy_amount > 0)
      buys = insert(buys, buy_value, buy_amount, buy_index);
    if (sell_amount > 0)
      sells = insert(sells, sell_value, sell_amount, sell_index);
  }
}

void add_buy_normal(int p, int a, int idx)
{
  buys = insert(buys, p, a, -idx);
  fix();
}

void add_sell_normal(int p, int a, int idx)
{
  sells = insert(sells, p, a, idx);
  fix();
}

void add_buy_fok(int p, int a, int idx)
{
  long long leq;
  sells = get_leq(sells, p, leq);
  if (leq < a)
    return;
  pair<node *, node *> P = split(sells, p, inf);
  while (a > 0)
  {
    node *sell = get_min(P.first);
    int sell_value = sell->value;
    int sell_amount = sell->amount;
    int sell_index = sell->index;
    P.first = remove(P.first, sell_value, sell_amount, sell_index);
    int taken = min(a, sell_amount);
    transactions.emplace_back(abs(sell_index), idx, taken);
    a -= taken;
    sell_amount -= taken;
    if (sell_amount > 0)
      P.first = insert(P.first, sell_value, sell_amount, sell_index);
  }
  sells = merge(P.first, P.second);
}

void add_sell_fok(int p, int a, int idx)
{
  long long geq;
  buys = get_geq(buys, p, geq);
  if (geq < a)
    return;
  pair<node *, node *> P = split(buys, p - 1, inf);
  while (a > 0)
  {
    node *buy = get_max(P.second);
    int buy_value = buy->value;
    int buy_amount = buy->amount;
    int buy_index = buy->index;
    P.second = remove(P.second, buy_value, buy_amount, buy_index);
    int taken = min(a, buy_amount);
    transactions.emplace_back(idx, abs(buy_index), taken);
    a -= taken;
    buy_amount -= taken;
    if (buy_amount > 0)
      P.second = insert(P.second, buy_value, buy_amount, buy_index);
  }
  buys = merge(P.first, P.second);
}

void print_transactions()
{
  cout << transactions.size() << '\n';
  for (auto e : transactions)
  {
    int l, r, v;
    tie(l, r, v) = e;
    cout << l << " " << r << " " << v << '\n';
  }
}

void DFS(node *t)
{
  if (t == nullptr)
    return;
  DFS(t->left);
  cout << t->value << " " << t->amount << " " << t->index << endl;
  DFS(t->right);
}

void print_status()
{
  cout << "BUYS" << endl;
  DFS(buys);
  cout << endl;
  cout << "SELLS" << endl;
  DFS(sells);
  cout << endl;
}

int main()
{
  cin.tie(0)->sync_with_stdio(false);
  int q;
  cin >> q;
  int p, a;
  string s, t;
  for (int i = 1; i <= q; i++)
  {
    cin >> s >> t >> p >> a;
    if (t[0] == 'n')
    {
      if (s[0] == 'b')
      {
        add_buy_normal(p, a, i);
      }
      else
      {
        add_sell_normal(p, a, i);
      }
    }
    else
    {
      if (s[0] == 'b')
      {
        add_buy_fok(p, a, i);
      }
      else
      {
        add_sell_fok(p, a, i);
      }
    }
  }
  print_transactions();
  return 0;
}