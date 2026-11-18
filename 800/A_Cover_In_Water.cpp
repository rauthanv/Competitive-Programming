#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t)
  {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt = 0;

    if (s.find("...") != string::npos)
    {
      cout << 2 << "\n";
    }
    else
    {
      for (int i = 0; i < n; i++)
      {
        if (s[i] == '.')
          cnt++;
      }
      cout << cnt << "\n";
    }
    t--;
  }
  return 0;
}