#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,K;
  cin >> N >> K;
  vector<long int> H(N);
  for (int i=0; i<N; i++){
    cin >> H.at(i);
  }
  
  sort(H.begin(),H.end());//小さい順
  reverse(H.begin(),H.end());//大きい順
  long int ans = 0;
  
  if(N <= K){
    cout << 0 << endl;
  }
  
  else{
    for(int i=K; i<N; i++){
      ans += H.at(i);
    }
    cout << ans << endl;
  }
}

