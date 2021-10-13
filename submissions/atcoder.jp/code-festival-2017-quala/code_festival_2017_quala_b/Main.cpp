#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    int n,m,k;
    cin >> n >> m >> k;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=m; j++){
            if(((m-j)*i + (n-i)*j) == k){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}
