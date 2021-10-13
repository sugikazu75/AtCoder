#include <bits/stdc++.h>
using namespace std;

int whether_prime(int x){
  int c=0;
  for (int i=2; i<x; i++){
    if(x % i == 0){
      c++;
      break;
    }
  }
  if (c == 0){
    return 1;//xは素数
  }
  else{
    return 0;//xは素数じゃない
  }
}
    

int main(){
  int X;
  cin >> X;
  
  int ok = 0;
  while (ok == 0){
    if(whether_prime(X) == 1){
      ok ++;
    }
    else{
      X++;
    }
  }
  
  cout << X << endl;
}

    