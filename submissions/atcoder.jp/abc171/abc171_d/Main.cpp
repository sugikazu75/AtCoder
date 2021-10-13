#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    int n;
    cin >> n;
    
    long long tmp = 0;

    vector <int> a(100010,0);
    rep(i,n){
        int d;
        cin >> d;
        a[d-1] ++;
        tmp += d;
    }

    int q;
    cin >> q;
    rep(i,q){
        int b,c;
        cin >> b >> c;
        long long countb = a[b-1];
        long long countc = a[c-1];
        tmp = tmp - countb * b + countb * c;
        cout << tmp << endl;

        a[c-1] += a[b-1];
        a[b-1] = 0;
    }
    
}
