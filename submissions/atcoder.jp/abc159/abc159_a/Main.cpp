#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n,m;
    cin >> n >> m;

    cout << n*(n-1)/2 + m*(m-1)/2 << endl;
}