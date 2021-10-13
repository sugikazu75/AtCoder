#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b;
  cin >> a >> b;
  int ans = a*b;
  
  if (ans % 2 ==0){
    cout << "Even" << endl;
  }
  else{
    cout << "Odd" << endl;
  }
}