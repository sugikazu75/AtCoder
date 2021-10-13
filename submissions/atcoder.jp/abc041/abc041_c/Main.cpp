#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    int n;
    cin >> n;
    vector < pair<long long,long long> > tall(0);
    rep(i,n){
        int a;
        cin >> a;
        tall.push_back({a,i});
    }

    sort(all(tall));
    reverse(all(tall));
    
    rep(i,n){
        cout << tall[i].second + 1 << endl;
    }

}
