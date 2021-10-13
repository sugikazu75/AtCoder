#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  vector<int>d(N);
  int ans=0;
  int max=0;
  
  for (int i=0; i<N; i++){
    cin >> d.at(i);
  }
  sort(d.begin(),d.end());
  reverse(d.begin(),d.end());
  
  if (N==1){
    cout << N << endl;
  }
  else{
    max = d.at(0);
    for (int i=1; i<N; i++){
      if(max > d.at(i)){
        max = d.at(i);
        ans++;
      }
    }
    cout << ans+1 << endl;
  }
}