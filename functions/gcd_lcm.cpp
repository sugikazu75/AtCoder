#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}


int lcm(int a, int b){
    return a / gcd(a,b) * b;    //オーバーフロー防止
}

/*要素が3つ以上のとき
aとbとcの最大公約数　＝　aとbの最大公約数とcの最大公約数
aとbとcの最小公倍数　＝　aとbの最小公倍数とcの最小公倍数
なので順番に関数を作用させる*/

/*
int ans=gcd(A[0],A[1]);
for(int i=0; i<A.size(); i++) ans = gcd(ans,A[i]);
*/


