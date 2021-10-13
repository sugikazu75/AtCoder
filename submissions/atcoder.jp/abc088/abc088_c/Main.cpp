#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <vector <int> > c(3, vector <int> (3));
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> c[i][j];
        }
    }

    int ok=0;
    int a12=c[0][0]-c[1][0], a23=c[1][0]-c[2][0], a31=c[2][0]-c[0][0], b12=c[0][0]-c[0][1], b23=c[0][1]-c[0][2], b31=c[0][2]-c[0][0];
    
    for(int i=0; i<3; i++){
        if(c[0][i]-c[1][i] != a12){
            ok++;
        }
        if(c[1][i]-c[2][i] != a23){
            ok++;
        }
        if(c[2][i]-c[0][i] != a31){
            ok++;
        }
        if(ok != 0){
            break;
        }
    }
    for(int i=0; i<3; i++){
        if(c[i][0]-c[i][1] != b12){
            ok++;
        }
        if(c[i][1]-c[i][2] != b23){
            ok++;
        }
        if(c[i][2]-c[i][0] != b31){
            ok++;
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