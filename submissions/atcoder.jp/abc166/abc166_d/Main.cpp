#include <bits/stdc++.h>
using namespace std;

int main(){
    int X;
    cin >> X;

    int a,b;

    for(int i=-1000; i <=1000; i++){
        for(int j=-1000; j <=1000; j++){
            if(std::pow(i,5) - std::pow(j,5) == X){
                a = i;
                b = j;
                break;
            }
        }
    }

    cout << a << " " << b << endl;
}