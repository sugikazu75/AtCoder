#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        if(n % i == 0){
            if(i<10 && n/i<10){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}