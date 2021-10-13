#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    cin >> n;
    map <int,int> table;
    vector <int> ans(n);
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(table.count(a)){
            ans[i] = 1;
        }
        else{
            table[a] = 1;
        }
    }

    int num;
    rep(i,n){
        num += ans[i];
    }

    cout << num << endl;
}