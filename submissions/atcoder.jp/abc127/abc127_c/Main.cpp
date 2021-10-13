#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n,m;
    cin >> n >> m;
    vector <int> l(m), r(m);
    rep(i,m) cin >> l[i] >> r[i];

    int maxleft=l[0], minright=r[0];
    for(int i=0;i<m; i++){
        if(l[i] > maxleft) maxleft = l[i];
        if(r[i] < minright) minright = r[i];
    }

    if(maxleft > minright){
        cout << 0 << endl;
        return 0;
    }
    else cout << minright - maxleft + 1 << endl;


} 
