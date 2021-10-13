#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i=0; i<N; i++){
        cin >> a[i];
    }

    vector<int> count(8,0);
    int free = 0;

    for(int i=0; i<N; i++){
        int per400 = a[i]/400;
        if(per400 >= 8){
            free++;
        }
        else{
            count[per400] ++;
        }
    }

    int color;
    for(int i=0; i<8; i++){
        if(count[i] != 0){
            color ++;
        }
    }

    if(color > 0){
        cout << color << " " << color + free << endl;
    }
    else{
        cout << 1 << " " << free << endl;
    }
}
