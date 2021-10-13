#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int a,b;
    cin >> a >> b;
    if(a <= 2*b){
        cout << 0 << endl;
    }
    else{
        cout << a - 2*b << endl;
    }
}