#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M = 2;
    cin >> N;

    for(int i = 0; i < N; i++){
        M += pow(2, i);
    }

    int result = pow(M, 2);
    cout << result << "\n";
}