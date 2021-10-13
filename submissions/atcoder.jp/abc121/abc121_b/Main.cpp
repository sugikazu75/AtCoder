#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M, C;
    cin >> N >> M >> C;

    vector<int> B(M);
    for(int i=0; i<M; i++){
        cin >> B.at(i);
    }

    vector<vector<int>> A(N, vector<int>(M));
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> A.at(i).at(j);
        }
    }

    int ans=0;
    for(int i=0; i<N; i++){
        int fi = C;
        for(int j=0; j<M; j++){
            fi += A.at(i).at(j) * B.at(j);
        }
        if(fi > 0){
            ans ++;
        }
    }

    cout << ans << endl;
}