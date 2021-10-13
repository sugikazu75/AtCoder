#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i=0; i<N; i++){
        cin >> a.at(i);
    }

    int count=0, num=1;

    while(count < N){
        num = a.at(num-1);
        count ++;
        if (num == 2){
            break;
        }
    }
    
    if(num == 2){
        cout << count << endl;
    }
    else{
        cout << -1 << endl;
    }

}