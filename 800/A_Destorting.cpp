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
    int ans = INT_MAX;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
      cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++){
      if (a[i] > a[i + 1]){
        ans = 0;
        break;
      }
      int diff = a[i + 1] - a[i];
      ans = min(ans, (diff / 2) + 1);
    }
    cout << ans << "\n";
    t--;
  }
}