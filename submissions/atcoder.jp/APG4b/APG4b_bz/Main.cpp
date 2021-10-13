#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main() {
    int n;
    cin >> n;

    vector <int> A(n);
    rep(i,n) cin >> A[i];

    map <int, int> a;
    rep(i,n){
        if(a.count(A[i])){
            a.at(A[i]) ++;
        }
        else a[A[i]] = 1;
    }

    int maxfigure=0;//kazu
    int maxcount=0;//kaisuu
    for(int x:A){
        if(maxcount < a[x]){
            maxfigure = x;
            maxcount = a[x];
        }
    }
    
    cout << maxfigure << " " << maxcount << endl;
}
