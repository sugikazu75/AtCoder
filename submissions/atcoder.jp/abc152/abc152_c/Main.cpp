#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> P(N);
  for(int i=0; i<N; i++){
    cin >> P.at(i);
  }
  int count=0;
  
  int min=P.at(0);
  for(int i=0; i<N; i++){
    if(i==0){
      count++;
    }
    
    else{
      if(P.at(i) < min){
        min = P.at(i);
        count++;
      }
    }
  }
  cout << count << endl;
}