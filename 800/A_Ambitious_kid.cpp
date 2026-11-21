#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int mindist = INT_MAX;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;

        mindist = min(mindist, abs(x));
    }

    cout << mindist << "\n";
}