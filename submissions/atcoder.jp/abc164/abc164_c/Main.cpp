#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<string> S(N);
  for (int i=0; i<N; i++){
    cin >> S.at(i);
  }
  sort(S.begin(),S.end());
  
  if (N==1){
    cout << 1 << endl;
  }
  else{
    int ans=1;
    for (int i=1; i<N; i++){
      int k=0;
      string Si=S.at(i);
      if(S.at(i) == S.at(i-1)){
        k++;
      }
      if (k == 0){
        ans++;
      }
    }
  cout << ans << endl;
  }
}