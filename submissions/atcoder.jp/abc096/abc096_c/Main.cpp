#include <bits/stdc++.h>
using namespace std;

int main(){
    int H,W;
    cin >> H >> W;
    vector <string> S(H);
    vector <vector <string> > s(H, vector<string>(W));
    for(int i=0; i<H; i++){
        cin >> S[i];
    }

    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            s[i][j] = S[i][j];
        }
    }

    int ok=0;
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            int okij=0;
            if(s[i][j] == "#"){
                if(0 <= i-1){
                    if(s[i-1][j] == "."){
                        okij++;
                    }
                }
                if(i+1 <= H-1){
                    if(s[i+1][j] == "."){
                        okij++;
                    }
                }
                if(0 <= j-1){
                    if(s[i][j-1] == "."){
                        okij++;
                    }
                }
                if(j+1 <= W-1){
                    if(s[i][j+1] == "."){
                        okij++;
                    }
                }
            }
            if(okij == 4){
                ok ++;
                break;
            }   
        }
        if(ok != 0){
            break;
        }
    }
    if(ok == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}