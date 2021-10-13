#include <bits/stdc++.h>
using namespace std;

int main(){
   vector<vector <int> > A (3, vector<int>(3));
   for (int i=0; i<3; i++){
       for(int j=0; j<3; j++){
           cin >> A.at(i).at(j);
       }
   }

   int N;
   cin >> N;

   vector<int> b(N);
   for(int i=0; i<N; i++){
       cin >> b.at(i);
   }

   vector<vector <int> > table(3,vector<int>(3,0));

    for(int i=0; i<N; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                if(b.at(i) == A.at(j).at(k)){
                    table.at(j).at(k) = 1;
                }
            }
        }
    }

    int bingo = 0;
    for(int i=0; i<3; i++){
        if(table.at(i).at(0) == table.at(i).at(1) && table.at(i).at(1) == table.at(i).at(2) && table.at(i).at(0) == 1){
            bingo ++;
            break;
        }
    }

    for(int i=0; i<3; i++){
        if(table.at(0).at(i) == table.at(1).at(i) && table.at(1).at(i) == table.at(2).at(i) && table.at(0).at(i) == 1){
            bingo++;
            break;
        }
    }

    if(table.at(0).at(0) == table.at(1).at(1) && table.at(1).at(1) == table.at(2).at(2) && table.at(0).at(0) == 1){
        bingo++;
    }

    if(table.at(0).at(2) == table.at(1).at(1) && table.at(1).at(1) == table.at(2).at(0) && table.at(0).at(2) == 1){
        bingo++;
    }

    if(bingo == 0){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
}