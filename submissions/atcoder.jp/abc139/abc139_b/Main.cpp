#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B;
    cin >> A >> B;
    int count = 0;
    int tap = 1;

    while(tap < B){
        tap = tap - 1 + A;
        count ++;
    }
    cout << count << endl;
}