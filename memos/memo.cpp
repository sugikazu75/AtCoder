#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){

    vector<int>A;
    int x,n,a,b;

    //xのn乗
    int ans = pow(x,n);

    //小数点以下の精度指定
    double num = 1.0/3.0;//.0もつけると浮動小数
    cout << fixed << setprecision(10);
    cout << num << endl;


    //char に加算などはできる

    //a/bの割り算で切り上げ
    int c = (a + b -1)/b;
        
}