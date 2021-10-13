#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++){
    cin >> data.at(i);
  }
  int ans=0;
  for (int i=0; i<5; i++){
    if (-1<i-1 && i+1<5){
      if (data.at(i-1) == data.at(i) || data.at(i) == data.at(i+1)){
        ans++;
      }
    }
    else if (i-1==-1){
      if (data.at(0) == data.at(1)){
        ans++;
      }
    }
    else{
      if (data.at(3) == data.at(4)){
        ans++;
      }
    }    
  }
  if (ans == 0){
    cout <<  "NO" << endl;
  }
  else{
    cout << "YES" << endl;
  }
}