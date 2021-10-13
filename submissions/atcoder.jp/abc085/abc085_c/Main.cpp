#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int n,tot;
    cin >> n >> tot;
    int x=-1, y=-1, z=-1;
    for(int i=n; i>=0; i--){
        for(int j=n-i; j>=0; j--){
            if((10000*i + 5000*j + 1000*(n-i-j) ) == tot){
                x=i;
                y=j;
                z=n-i-j;
                break;
            }
        }
        if(x != -1){
            break;
        }
    }
    cout << x << " " << y << " " << z << endl;
}
