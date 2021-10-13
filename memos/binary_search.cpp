#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

//binary_search for sorted vector

bool is_ok(long long n){//問題に応じて、nが条件を満たすかの関数を定義
    return true;
}

int main(){
    int n;
    vector <int> a(n);
    long long ok = -1;//左端のindexより1小さく。okから左は条件を満たせる
    long long ng = a.size();//右端のindexより1大きく。ngから右は条件を満たせない

    while(abs(ok - ng) > 1){//okとngが隣り合っていない場合do
        long long mid = (ok + ng) / 2;//okとngの中間
        
        //midが条件を満たすか
        if(is_ok(mid)){//条件を満たす場合、midより左は条件を満たす
            ok = mid;
        }
        else{//条件を満たさない場合、midより右は条件を満たさない
            ng = mid;
        }
    }

    cout << ok << endl;

    
}