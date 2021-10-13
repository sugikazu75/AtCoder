#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    int x,n;
    cin >> x >> n;
    vector <int> p(n);
    rep(i,n) cin >> p[i];
    sort(all(p));

    //ans>x
    int big;
    for(int i=x; i<=101; i++){
        int tmp = count(all(p),i);
        if(tmp == 0){
            big = i;
            break;
        }
    }

    int small;
    for(int i=x; i>=-1; i--){
        int tmps = count(all(p),i);
        if(tmps == 0){
            small = i;
            break;
        }
    }
    int b=abs(x-big), s=abs(x-small);
    if(b >= s){
        cout << small << endl;
    }
    else{
        cout << big << endl;
    }
    
}
