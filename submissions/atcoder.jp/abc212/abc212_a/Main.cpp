#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int a,b;
    cin >> a >> b;
    if(0 < a && b == 0) cout << "Gold" << endl;
    else if(a == 0 && 0 < b) cout << "Silver" << endl;
    else if(0 < a && 0 < b) cout << "Alloy" << endl;
}