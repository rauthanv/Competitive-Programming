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
    unordered_map<int, int> mp;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      mp[a[i]]++;
    }

    if (mp.size() > 2)
    {
      cout << "No\n";
    }
    else if (mp.size() == 1)
    {
      cout << "Yes\n";
    }
    else
    {
      auto it = mp.begin();
      int freq1 = it->second;
      it++;
      int freq2 = it->second;
      if (abs(freq1 - freq2) <= 1)
      {
        cout << "Yes\n";
      }
      else
        cout << "No\n";
    }

    t--;
  }
  return 0;
}