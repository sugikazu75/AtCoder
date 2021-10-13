#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    cin >> n;
    vector <int> a(n),b(n);
    rep(i,n) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(all(b));
    b.erase( unique (  b.begin() , b.end() ) , b.end() );

    map <int,long> table;
    rep(i,n){
        if(table.count(a[i])) table.at(a[i]) ++;
        else table[a[i]] = 1;
    }

    long sum = 0;
    for(int x:b){
        sum += table.at(x) *(table.at(x) - 1) /2;
    }

    vector <long> ans(n);

    for(int i=0; i<n; i++){
        ans[i] = sum - table.at(a[i]) * (table.at(a[i]) - 1) /2 + (table.at(a[i]) -1) * (table.at(a[i]) -2)/2; 
    }

    rep(i,n) cout << ans[i] << endl;
}
