#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    int r,g,b;
    cin >> r >> g >> b;
    int k;
    cin >> k;
    bool ok = false;
    for(int i=0; i<=k; i++){
        for(int j=0; j<=k-i; j++){
            int R=r*pow(2,i);
            int G=g*pow(2,j);
            int B=b*pow(2,k-i-j);
            if(R<G && G<B){
                ok = true;
            }
        }
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}