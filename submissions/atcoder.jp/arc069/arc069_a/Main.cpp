#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    long n,m;
    cin >> n >> m;

    if(2*n >= m){
        cout << m/2 << endl;
    }

    else{ //2n<m
        cout << (n + m/2)/2 << endl;
    }
}
