#include <bits/stdc++.h>
using namespace std;

int abs(int x){
  if (x >= 0){
    return x;
  }
  else{
    return -x;
  }
}
int main(){
  int N;
  cin >> N;
  vector<int> T(N), X(N), Y(N);
  for (int i=0; i<N; i++){
    cin >> T.at(i) >> X.at(i) >> Y.at(i);
  }

  if (N == 1){
    int ans_1 = 0;
    int t_1 = T.at(0);
    int x_1 = X.at(0);
    int y_1 = Y.at(0);
    if((x_1 + y_1) <= t_1 && (x_1 + y_1) % 2 == t_1 % 2){
      ans_1++;
    }
    if(ans_1 == 1){
      cout << "Yes" << endl;
    }
    else{
      cout << "No" << endl;
    }
  }
  else{
    int ans=0;
    for (int i=1; i<N; i++){
      int dt=T.at(i) - T.at(i-1);
      int dx = abs(X.at(i) - X.at(i-1));
      int dy = abs(Y.at(i) - Y.at(i-1));
      if ((dx + dy) > dt || (dx + dy) % 2 != dt % 2){
        ans++;
        break;
      }
    }
    if (ans == 0){
      cout << "Yes" << endl;
    }
    else{
      cout << "No" << endl;
    }
  }
}
      