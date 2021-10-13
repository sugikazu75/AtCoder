#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector <long> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end());

    vector <int> count(N,0);

    count[0] = 1;
    int mark=0;
    for(int i=0; i<N-1; i++){
        if(A[i] != A[i+1]){
            mark++;
            count[mark]++;
        }
        else{
            count[mark]++;
        }
    }

    int ans=0;
    for(int i=0; i<N; i++){
        ans = ans + count[i] % 2;
    }
    cout << ans << endl;
}