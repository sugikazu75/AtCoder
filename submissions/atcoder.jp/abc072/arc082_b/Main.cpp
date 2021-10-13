#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i,n) cin >> p[i];
    int count;

    for(int i=0; i<n; i++){
        if(p[i] == i+1){
            swap(p[i],p[i+1]);
            count ++;
        }
    }
    cout << count << endl;
}