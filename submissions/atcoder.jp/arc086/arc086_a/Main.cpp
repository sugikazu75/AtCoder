#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;

    vector <int> num(N);
    for(int i=0; i<N; i++){
        cin >> num[i];
    }

    sort(num.begin(), num.end());

    int maxnum = num[N-1];
    vector <int> count_num(maxnum,0);

    for(int i=0; i<N; i++){
        count_num [num[i] - 1] ++;
    }

    sort(count_num.begin(), count_num.end());

    int zerocount = 0;
    int ans=0;
    for(int i=0; i<maxnum; i++){
        if(count_num[i] == 0){
            zerocount++;
        }
    }
    if(maxnum-zerocount <= K){
        cout << 0 << endl;

    }
    else{
        for(int i=zerocount; i<=maxnum-K-1; i++){
            ans += count_num[i];
        }
        cout << ans << endl;
    }
    
}