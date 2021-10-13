#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    long goal;
    cin >> goal;

    long time = 1;
        
    while(true){
        long ans = (time * (time + 1))/2;
        if(ans >= goal){
            break;
        }
        else{
            time++;
        }
    }
    cout << time << endl;
}
