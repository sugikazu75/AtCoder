#include <bits/stdc++.h>
using namespace std;

int vector_max(vector<int> A){
    sort(A.begin(), A.end());//mainの中でsortしなければAの順序は変わらない
    int max = A[A.size() - 1];
    return max;
}


