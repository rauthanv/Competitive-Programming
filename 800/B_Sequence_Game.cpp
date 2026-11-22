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

    vector<int> ans;
    int prev;

    for (int i = 0; i < n; i++){
      int x;
      cin >> x;

      if (i == 0){
        ans.push_back(x);
      }
      else{
        if (prev > x){
          ans.push_back(1);
        }
        ans.push_back(x);
      }

      prev = x;
    }

    cout << ans.size() << "\n";

    for (int i = 0; i < ans.size(); i++){
      cout << ans[i] << " ";
    }
    cout << "\n";

    t--;
  }
}