#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t)
  {
    int n, m;
    cin >> n >> m;

    string x, s;
    cin >> x >> s;
    
    int op = 0;
    while (x.size() < m)
    {
      x = x + x;
      op++;
    }
    if (x.find(s) == string::npos)
    {
      x += x;
      op++;
    }
    if (x.find(s) == string::npos)
    {
      cout << -1 << "\n";
    }
    else
      cout << op << "\n";

    t--;
  }
}