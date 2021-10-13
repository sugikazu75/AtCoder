#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    cin >> n;
    vector <int> d(n);
    rep(i,n) cin >> d[i];

    sort(all(d));

    int maxleft = d[n/2 - 1];
    int minright= d[n/2];
    cout << -maxleft + minright << endl;
} 
