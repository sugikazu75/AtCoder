#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<vector<long int>> place(N, vector<long int>(2));
    vector<vector<long int>> check(M, vector<long int>(2));

    for(int i=0; i<N; i++){
        cin >> place.at(i).at(0) >> place.at(i).at(1);
    }
    for(int i=0; i<M; i++){
        cin >> check.at(i).at(0) >> check.at(i).at(1);
    }
    vector<int> goal(N);

    for(int i=0; i<N; i++){
        long int lmin = abs(place[i][0] - check[0][0]) + abs(place[i][1] - check[0][1]);
        int goali = 1;
        for(int j=0; j<M; j++){
            if ((abs(place[i][0] - check[j][0]) + abs(place[i][1] - check[j][1])) < lmin){
                lmin = abs(place[i][0] - check[j][0]) + abs(place[i][1] - check[j][1]);
                goali = j+1;
            }
        }
        goal.at(i) = goali;
    }
    for(int i=0; i<N; i++){
        cout << goal[i] << endl;
    }
}