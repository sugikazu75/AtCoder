#include <bits/stdc++.h>
using namespace std;

int main(){
  long int N;
  long int K;
  cin >> N >> K;
  long int J = N % K;
  if (J <= K-J){
    cout << J << endl;
  }
  else{
    cout << K-J << endl;
  }
}