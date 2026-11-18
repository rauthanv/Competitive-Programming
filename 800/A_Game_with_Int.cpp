#include <bits\stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t)
  {
    int n;
    cin >> n;

    if (n % 3 != 0)
    {
      cout << "FIRST" << "\n";
    }
    else
    {
      cout << "SECOND" << "\n";
    }
    t--;
  }
  return 0;
}