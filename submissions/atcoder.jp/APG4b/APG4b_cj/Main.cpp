#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<int> vec(N);
  for(int i = 0 ; i < N ; i++){
    cin >> vec.at(i);
  }
  
  int sum;
  sum = 0;
  for(int i = 0; i< N ; i++){
    sum = sum + vec.at(i);
  }
  
  int ave = sum / N;

  vector<int> ans1(N);
  
  for(int i = 0 ; i < N ; i++){
    
    if (vec.at(i) >= ave){
      ans1.at(i) = vec.at(i) - ave;
    }
    
    else{
      ans1.at(i) = ave - vec.at(i);
    }
  }
  
  for (int i= 0; i < N ; i++){
    cout << ans1.at(i) << endl;
  }
}