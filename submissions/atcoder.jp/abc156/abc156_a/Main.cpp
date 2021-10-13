#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n,r;
    cin >> n >> r;
    if(n >= 10){
        cout << r << endl;
    }
    else{
        cout << r + 100 * (10 - n) << endl;
    }
}