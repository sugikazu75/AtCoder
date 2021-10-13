#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    rep(i,n){
        if(i==n-1) cout << 'x' << endl;
        else cout << 'x';
    }
}