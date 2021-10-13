#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if((a==b && b!=c) || (b==c && c!=a) || (c==a && a!=b)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}