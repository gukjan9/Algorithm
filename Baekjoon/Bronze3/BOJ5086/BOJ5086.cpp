#include <bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int N, M;
        cin >> N >> M;

        if(N == 0 && M == 0) return 0;
        else if(N > M){
            if(N % M == 0) cout << "multiple" << "\n";
            else cout << "neither" << "\n";
        }
        else{
            if(M % N == 0) cout << "factor" << "\n";
            else cout << "neither" << "\n";
        }
    }
}