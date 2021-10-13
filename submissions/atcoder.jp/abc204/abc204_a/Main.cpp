#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int a,b;
    cin >> a >> b;
    if(a == b){
        cout << a << endl;
        return 0;
    }
    else{
        cout << 3 - a - b << endl;
    }
}
