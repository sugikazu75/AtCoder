#include <bits/stdc++.h>
using namespace std;

int main(){
    int thp,tat,ahp,aat;
    cin >> thp >> tat >> ahp >> aat;

    int count = 0;
    while(thp>0 && ahp>0){
        if(count%2 == 0){
            ahp -= tat;
            count ++;
        }
        else{
            thp -= aat;
            count ++;
        }
    }
    if (thp > 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}