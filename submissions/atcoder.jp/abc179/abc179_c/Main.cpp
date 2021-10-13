#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;

    int ans = 0;

    for(int c=1; c <= n-1; c++){
        int tmp = n - c;


        int tmpi = 1;   //tmpの約数の個数
        for(int i=2; i*i <= tmp; i++){
            int ex = 0;     //次数
            while(tmp % i == 0){
                ex ++;
                tmp /= i;
            }
            tmpi *= ex+1;

            if(tmp == 1) break;
        }
        if(tmp != 1) tmpi *= 2;

        ans += tmpi;
    }

    cout << ans << endl;
}