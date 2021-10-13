#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    
    long int Bcount = 0;
    long int ans = 0;
    for (int i=0; i<S.size(); i++){
        if(S.at(i) == 'B'){
            Bcount ++;
        }
        if (S.at(i) == 'W'){
            ans += Bcount;
        }
    }
    cout << ans << endl;
}