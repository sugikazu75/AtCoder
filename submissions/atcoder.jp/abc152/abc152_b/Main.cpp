#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int a,b;
    cin >> a >> b;
    if(a > b){
        swap(a,b);
    }

    rep(i,b){
        if(i == b-1){
            cout << a << endl;
        }
        else cout << a;
    }
    
}