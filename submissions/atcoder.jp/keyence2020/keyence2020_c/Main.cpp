#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,k,s;
    cin >> n >> k >> s;

    if(s!=1){
        if(n==k){
            rep(i,k){
                if(i == k-1){
                    cout << s << endl;
                }
                else cout << s << " ";
            }
        }

        if(n != k){
            rep(i,k){
                cout << s << " ";
            }
            rep(i,n-k){
                if(i == n-k-1){
                    cout << s-1 << endl;
                }
                else cout << s-1 << " ";
            }
        }
    }
    else{
        if(n==k){
            rep(i,k){
                if(i == k-1){
                    cout << s << endl;
                }
                else cout << s << " ";
            }
        }

        if(n != k){
            rep(i,k){
                cout << s << " ";
            }
            rep(i,n-k){
                if(i == n-k-1){
                    cout << s+1 << endl;
                }
                else cout << s+1 << " ";
            }
        }
    }
}
