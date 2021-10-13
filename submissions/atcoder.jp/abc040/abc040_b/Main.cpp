#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    int n;
    cin >> n;
    int ans = 100000;

    int spare=0;
    while(spare <= ans){
        int num = n - spare;
        for(int i=sqrt(num); i>=1; i--){
            if(num % i == 0){
                if(ans > abs(i - num/i) + spare){
                    ans = abs(i - num/i) + spare;
                }
            }
        }
        spare++;
    }

    cout << ans << endl;
}
