#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int prime_flag[10000010];

void Eratosthenes(int n){
    for(int i=0; i<10000010; i++) prime_flag[i] = 1;
    prime_flag[0] = 0;
    prime_flag[1] = 0;
    for(int i=2; i * i <= n; i++){
        if(prime_flag[i]){
            for(int j = 0; i * (j + 2) <= n; j++){
                prime_flag[i * (j + 2)] = 0;
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    //auto a = Eratosthenes(n);
    Eratosthenes(n);
    for(int i=0; i<=n; i++){
        if(prime_flag[i]){
            cout << i << ",";
        }
    }
}

