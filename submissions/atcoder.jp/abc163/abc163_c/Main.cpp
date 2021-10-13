#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> A(N-1);
  for (int i=0; i<N-1; i++){
    cin >> A.at(i);
  }
  sort(A.begin(),A.end());
 
  vector<int> ans(N,0);
  
  for (int i=0; i<N-1; i++){
    int Ai=A.at(i);
    ans.at(Ai-1)++;
  }
  
  for (int i=0; i<N; i++){
    cout << ans.at(i) << endl;
  }
}