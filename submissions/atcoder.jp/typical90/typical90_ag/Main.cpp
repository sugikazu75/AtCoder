#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int h,w;
    cin >> h >> w;
    if(h == 1) cout << w << endl;
    else if(w == 1) cout << h << endl;
    else{
        cout << ((h + 1) / 2) * ((w + 1) / 2) << endl;
    }
}