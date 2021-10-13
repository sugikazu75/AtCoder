#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    long N,M;
    cin >> N >> M;
    
    if((N == 2) || (M == 2)){
        cout << 0 << endl;
        return 0;
    }
    if(N == 1){
        if(M == 1){
            cout << 1 << endl;
            return 0;
        }
        else{  
            cout << M-2 << endl;
            return 0;
        }
    }

    if(M == 1){
        if(N == 1){
            cout << 1 << endl;
            return 0;
        }
        else{  
            cout << N-2 << endl;
            return 0;
        }
    }

    if((N >= 3) && (M >= 3)){
        cout << (N-2) * (M-2) << endl;
        return 0;
    }
}
