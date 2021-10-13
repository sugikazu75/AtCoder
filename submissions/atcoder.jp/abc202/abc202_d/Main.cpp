#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll a,b,k;
    cin >> a >> b >> k;
    vector < vector <ll> > comb(a+1, vector <ll> (b+1, 0)); 
    
    //comb[i][j] = aをi個,bをj個使う方法の総数
    comb[0][0] = 1;

    for(int i=0; i<a+1; i++){
        for(int j=0; j<b+1; j++){
            if(i > 0){
                comb[i][j] += comb[i-1][j];
            }
            if(j > 0){
                comb[i][j] += comb[i][j-1];
            }
        }
    }

    ll cnt = 0;
    ll tmpa = a;
    ll tmpb = b;
    vector <char> ans(a+b);

    while(cnt < a + b){
        if(tmpa == 0){
            ans[cnt] = 'b';
            tmpb--;
            cnt++;
        }
        else if(tmpb == 0){
            ans[cnt] = 'a';
            tmpa--;
            cnt++;
        }
        else{
            //b
            if(k > comb[tmpa-1][tmpb]){
                k -= comb[tmpa-1][tmpb];
                ans[cnt] = 'b';
                tmpb--;
                cnt++;
            }
            else{
                ans[cnt] = 'a';
                tmpa--;
                cnt++;
            }
        }
    }

    rep(i, a+b){
        cout << ans[i];
    }
    cout << endl;

}

