#include <bits/stdc++.h>
using namespace std;

int main(){
   int H,W;
   cin >> H >> W;
   
   vector<string> S(H);
   vector<vector <char>> s(H,vector <char>(W));
   for(int i=0; i<H; i++){
       cin >> S.at(i);
       for(int j=0; j<W; j++){
           s.at(i).at(j) = S.at(i).at(j);
       }
   }

      vector<vector<char>> ans(H,vector<char>(W));

   for(int i=0; i<H; i++){
       for(int j=0; j<W; j++){
           char countij='0';
           if(s.at(i).at(j) == '#'){
               ans.at(i).at(j) = '#';
           }
           else{
               for(int k=i-1; k<=i+1; k++){
                   for(int l=j-1; l<=j+1; l++){
                       if((0 <= k && k <= H-1) && (0 <= l && l <= W-1)){
                           if(s.at(k).at(l) == '#'){
                               countij++;
                           }
                       }
                       ans.at(i).at(j) = countij;
                   }
               }
           }
       }
   }

   
   for(int i=0; i<H; i++){
       for(int j=0; j<W; j++){
           if(j == W-1){
               cout << ans.at(i).at(j) << endl;
           }
           else{
               cout << ans.at(i).at(j);
           }
       }
   }
}