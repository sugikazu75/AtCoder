#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    cin >> n;
    map <int, int> a;
    for(int i=0; i<n; i++){
        int di;
        cin >> di;
        a[di] = i;
    }

    for(int i=1; i<=n; i++){
        if(i == n) cout << a[n] + 1;
        else cout << a[i] + 1 << " ";
    }
}
