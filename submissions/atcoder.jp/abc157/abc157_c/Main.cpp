#include <bits/stdc++.h>
using namespace std;

int vector_min(vector<int> A){
    sort(A.begin(), A.end());//mainの中でsortしなければAの順序は変わらない
    int minvector = A[0];
    return minvector;
}

int main(){
    int N,M;
    cin >> N >> M;
    vector<int> S(M), C(M);
    for (int i=0; i<M; i++){
        cin >> S.at(i) >> C.at(i);
    }
    
    vector<int> ans(1,-1);

    if(N == 1){
        for (int i=0; i<10; i++){
            int ok = 0;
            for (int j=0; j<M; j++){
                if(C.at(j) != i){
                    ok++;
                }
            }
            if(ok == 0){
                ans.push_back(i);
            }
        }     
    }
  
    if (N == 2){
        for(int i=10; i<100; i++){
            int i_10 = i/10;
            int i_1 = i % 10;
            int ok=0;
            for(int j=0; j<M; j++){
                if(S.at(j) == 1){
                    if (i_10 != C.at(j)){
                        ok++;
                    }
                }
                if(S.at(j) == 2){
                    if (i_1 != C.at(j)){
                        ok++;
                    }
                }
            }
            if(ok == 0){
                ans.push_back(i);
            }
        }
    }

    if(N == 3){
        for(int i=100; i<1000; i++){
            int i_100 = i/100;
            int i_10 = (i-100*i_100)/10;
            int i_1 = i%10;
            int ok = 0;
            for(int j=0; j<M; j++){
                if (S.at(j) == 1){
                    if(i_100 != C.at(j)){
                        ok++;
                    }
                }
                if(S.at(j) == 2){
                    if (i_10 != C.at(j)){
                        ok++;
                    }
                }
                if(S.at(j) == 3){
                    if(i_1 != C.at(j)){
                        ok++;
                    }
                }
            }
            if (ok==0){
                ans.push_back(i);
            }
        }
    }
    if (ans.size() == 1){
        cout << -1 << endl;
    }
    else{
        ans.at(0)=1000;
        cout << vector_min(ans) << endl;
    }
}
