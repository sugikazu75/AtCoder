#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int s, t;
    cin >> s >> t;

    int  ans = 0;
    for(int i=0; i<=s; i++){
        for(int  j=0; j<=s; j++){
            for(int k=0; k<=s; k++){
                if(i *  j * k <= t && i + j + k <= s) ans++; 
            }
        }
    }
    cout << ans <<endl;
}