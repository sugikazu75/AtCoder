#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    long long a;
    cin >> a;
    
    int ans = -1;

    for(int i=10; i<= 10000; i++){
        int ketai = 0;
        int tmp = i;
        vector <long long> ranki(0);

        while(tmp > 0){
            ranki.push_back(tmp % 10);//rankiはiの桁が１の桁から格納
            tmp /= 10;
            ketai ++;//ketaiはiの桁数
        }

        long long testi = 0;
        for(int j = 0; j < ketai; j++){
            long long jou = pow(i,j);
            testi += jou * ranki[j];
        }
        if(a == testi){
            ans = i;
            break;
        }
    }

    cout << ans << endl;
}
