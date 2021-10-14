#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string n;
    cin >> n;
    while(n.size() < 4){
        n = "0" + n;
    }

    cout << n << endl;
}