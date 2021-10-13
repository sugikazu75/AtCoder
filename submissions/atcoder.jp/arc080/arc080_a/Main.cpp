#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N;
    cin >> N;

    vector <long> g4(0), g2(0), g1(0);
    rep(i,N){
        long d;
        cin >> d;
        if(d % 4 == 0){
            g4.push_back(d);
        }
        else if(d % 2 == 0){
            g2.push_back(d);
        }
        else{
            g1.push_back(d);
        }
    }

    int size4 = g4.size(), size2 = g2.size(), size1 = g1.size();

    if(size2 == 0){
        if(size4 >= size1 - 1){
            cout << "Yes" << endl;
            return 0;
        }
        else{
            cout << "No" << endl;
            return 0;
        }
    }
    else{
        if(size4 >= size1){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}
