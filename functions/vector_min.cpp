#include <bits/stdc++.h>
using namespace std;

int vector_min(vector<int> A){
    sort(A.begin(), A.end());//mainの中でsortしなければAの順序は変わらない
    int min = A[0];
    return min;
}