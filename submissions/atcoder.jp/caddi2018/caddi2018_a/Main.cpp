#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
vector <pair <long long, long long> > prime_factorize(long long N){
    vector <pair <long long, long long> > res;
    for(long long a=2; a*a <= N; a++){//a<=N^0.5まで試す
        if(N % a != 0) continue;//素因数でないなら次のforループ
        long long ex = 0;//指数
        while(N % a == 0){
            ex ++;
            N /= a;
        }
        res.push_back({a,ex});//結果を格納
    }
    if(N != 1) res.push_back({N,1});//最後が1でなければ素因数
    return res;
}

int main(){
    long long n,p;
    cin >> n >> p;
    long long ans = 1;
    auto a = prime_factorize(p);
    for(auto x:a){
        if(x.second >= n){
            ans = ans * pow(x.first , x.second/n);
        }
    }
    cout << ans << endl;
}
