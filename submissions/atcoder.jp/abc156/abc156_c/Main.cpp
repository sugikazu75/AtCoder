#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> X(N);
  for(int i=0; i<N; i++){
    cin >> X.at(i);
  }
  sort(X.begin() , X.end());//小さい順に
  
  int min = 10000000;
  for (int i=X.at(0); i<=X.at(N-1); i++){ //iは試す座標
    int ans=0;
    for (int j=0; j<N; j++){ //jは人
      ans += (X.at(j) - i) * (X.at(j) - i);
    }
    if(ans < min){
      min = ans;
    }
  }
  cout << min << endl;
}

