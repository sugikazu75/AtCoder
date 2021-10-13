#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    cin >> n;
    vector <int> a(n);
    rep(i,n) cin >> a[i];

    int tmp=1;
    int count = 0;
    for(int i=0; i<n; i++){
        if(a[i] == tmp){
            tmp ++; 
            count ++;
        }
    }

    if(count ==0) cout << -1 << endl;
    else cout << n - count << endl;

}
