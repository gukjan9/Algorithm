#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M = 2;
    cin >> N;

    if(N < 8) cout << 0 << "\n";
    else cout << (N - M) / 6 + 2 << "\n";
    
}