#include <bits/stdc++.h>
using namespace std;

int main(){
    int K;
    cin >> K;
    int A,B;
    cin >> A >> B;
    int count=0;

    for(int i=A; i <=B; i++){
        if(i % K == 0){
            count++;
            break;
        }
    }
    if(count == 0){
        cout << "NG" << endl;
    }
    else{
        cout << "OK" << endl;
    }
}