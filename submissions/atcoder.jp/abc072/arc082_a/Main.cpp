#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i=0; i<N; i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());//小さい順にソート


    int m = a.at(0);
    int M = a.at(a.size()-1);

    int ans = 0;
        
    vector<int> count(M+1,0);//0からMの個数を格納
    for(int i=0; i<N; i++){
        int num=a.at(i);
        count.at(num) ++;
    }

    for(int i=0; i<=M; i++){
        int counti = 0;
        for(int j=i-1; j<=i+1; j++){
            if(0<=j && j<=M){
                counti += count.at(j);
            }
        }
        if(counti > ans){
            ans = counti;
        }
    }
    cout << ans << endl;
}
