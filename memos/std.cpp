#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

string S,T;
char c;
int a,b,i,j,k,l;
vector <int> v;
int main(){
    //abs(x)　xの絶対値

    //三角関数　sin(x),cos(x),tan(x)　弧度法を用いる

    //string
    S += T;                     //SにTを連結
    S += c;                     //Sにcを連結
    i = S.size();               //SのながさS.size()
    string S1 = S.substr(l);    //Sのl文字目から最後の文字まで
    string S2 = S.substr(l,r);  //Sのl文字目からl+r-1文字目まで      

    //min/max
    i = min(a,b);                       //小さい方
    i = min({i,j,k,l});                 //最小の要素
    i = *min_element(v.begin(),v.end());//一番小さい値のイテレータを返す

    //swap
    swap(a,b);          //aとbの値を入れ替える

    //__gcd(先頭_二つ)
    i = __gcd(a,b);     //aとbの最小公倍数

    
}