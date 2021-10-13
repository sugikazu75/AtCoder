#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C;
    cin >> A >> B >> C;

    vector<int> Ai(B);
    for(int i=1; i<=B; i++){
        Ai[i-1] = A*i;
    }

    vector<int> modBAi(B);
    for(int i=0; i<B; i++){
        modBAi[i] = Ai[i] % B;
    }
    int ok = 0;
    for(int i=0; i<B; i++){
        if(modBAi[i] == C){
            ok++;
        }
    }

    if(ok == 0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}
