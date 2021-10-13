#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;

    vector <int> x(n), y(n);

    rep(i,n){
        cin >> x[i] >> y[i];
    }

    bool ok = false;

    for(int i=0; i<=n-3; i++){
        for(int j=i+1; j<=n-2; j++){
            for(int k=j+1; k<=n-1; k++){
                int x1 = x[i], x2 = x[j], x3 = x[k];
                int y1 = y[i], y2 = y[j], y3 = y[k];
                    if((x1 == x2 && x2==x3) || (y1==y2 && y2==y3)){
                        ok = true;
                        break;
                    }
                    else{
                        if((y2-y1)*(x3-x2) == (y3-y2)*(x2-x1)){
                            ok = true;
                        }
                    }
            }
        }
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}