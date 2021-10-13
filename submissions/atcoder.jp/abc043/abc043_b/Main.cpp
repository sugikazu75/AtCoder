#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    string s;
    cin >> s;

    int count = 0;
    vector <char> ans(0);

    for(int i=0; i<s.size(); i++){
        if((s[i] == '1') || (s[i] == '0')){
            ans.push_back(s[i]);
            count ++;
        }
        else{
            if (count > 0){
                int size = ans.size();
                ans.resize(size-1);
                count --;
            }
        }
    } 
    rep(i,ans.size()){
        cout << ans[i];
    }
}