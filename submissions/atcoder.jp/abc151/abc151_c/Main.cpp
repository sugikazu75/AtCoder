#include <bits/stdc++.h>
using namespace std;
int main(){
  int N,M;
  cin >> N >> M;
  vector<int> p(M);
  vector<string> S(M);
  for (int i=0; i<M; i++){
    cin >> p.at(i) >> S.at(i);
  }
  int ac=0;
  int pena=0;
  
  vector<vector<string>> result(N, vector<string>(0));
  
  for (int i=0; i<M; i++){
    int pi=p.at(i);
    string si=S.at(i);
    result.at(pi-1).push_back(si);
  }
  
  for (int i=0; i<N; i++){
    if (result.at(i).size() != 0){
      int penai = 0;
      int aci = 0;
      for (int j=0; j<result.at(i).size(); j++){
        if(result.at(i).at(j) == "WA"){
          penai++;
        }
        
        else{
          aci++;
          break;
        }
      }
      if(aci==1){
        pena += penai;
        ac += aci;
      }
    }
  }
  cout << ac << " " << pena << endl;
}
  