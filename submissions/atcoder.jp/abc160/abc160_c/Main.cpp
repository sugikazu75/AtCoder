#include <bits/stdc++.h>
using namespace std;
int abs(int x,int y){
  if (x-y>=0){
    return x-y;
  }
  else{
    return y-x;
  }
}

int main(){
  int K,N;
  cin >> K >> N;
  vector<int> A(N);
  for(int i=0; i<N; i++){  
    cin >> A.at(i);
  }
  
  int max = (A.at(0)+(K-A.at(N-1)));
  for (int i=0; i<N-1; i++){
    if (max < abs(A.at(i),A.at(i+1))){
      max = abs(A.at(i),A.at(i+1));
    }
  }
  
  cout << K - max << endl;
}
  
  

