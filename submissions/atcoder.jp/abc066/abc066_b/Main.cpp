#include <bits/stdc++.h>
using namespace std;

int ok(string A){
    int notcount = 0;
    int length = A.size();
    for (int i=0; i<length/2; i++){
        if(A.at(i) != A.at(i + length/2)){
            notcount ++;
        }
    }
    if (notcount == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    string S;
    cin >> S;

    int count=0;
    int good=0;
    int Sbig = S.size();
    
    while(good == 0){
        S.erase(S.size()-2);
        count += 2;
        if (ok (S) == 1){
            good ++;
        }
    }
    cout << Sbig-count << endl;
}