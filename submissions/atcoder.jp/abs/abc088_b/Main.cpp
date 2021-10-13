#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for(int i=0; i<N; i++){
    cin >> a.at(i);//格納
  }
  sort(a.begin(),a.end());
  reverse(a.begin(),a.end());//大きい順並べ替え
  int ans = 0;
  for (int i=0; i<N; i+=2){
    ans += a.at(i);
  }
  for (int i=1; i<N; i+=2){
    ans -=a.at(i);
  }
  if (N==1){
    cout << a.at(0) << endl;
  }
  else{
    cout << ans << endl;
  }
}