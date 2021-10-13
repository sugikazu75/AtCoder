#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    vector <int> x(5);
    rep(i,5) cin >> x[i];
    for(int i=0; i<5; i++){
        if(x[i]==0){
            cout << i+1 << endl;
            return 0;
        }
    }
}
