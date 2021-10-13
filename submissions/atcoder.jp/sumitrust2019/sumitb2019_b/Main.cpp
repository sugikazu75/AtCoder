#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    int ans = 0;
    for(int i=1; i<=N; i++){
        int nedan = i * 1.08;

        if(nedan == N){
            ans = i;
            break;
        }
    }

    if (ans == 0){
        cout << ":(" << endl;
    }
    else{
        cout << ans << endl;
    }
}