#include <bits/stdc++.h>
using namespace std;

int main(){
    long int H,W;
    cin >> H >> W;
    long int ans;

    if(H == 1 || W == 1){
        cout << 1 << endl;
    }

    else{
        cout << (H * W + 1)/2 << endl;
    }

}