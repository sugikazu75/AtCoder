#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    long long a,b,v,w,t;
    cin >> a >> v >> b >> w >> t;
    long long l = abs(a-b);
    
    if((w-v) >= 0){
        cout << "NO" << endl;
    }
    else{
        if((v-w)*t >= l){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
