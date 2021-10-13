#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    string S;
    cin >> S;
    int ans = 1;
    for (int i=0; i<N-1; i++){
        if(S.at(i) != S.at(i+1)){
            ans++;
        }
    }
    cout << ans << endl;
}