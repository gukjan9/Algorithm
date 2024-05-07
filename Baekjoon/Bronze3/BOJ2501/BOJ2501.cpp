#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K, cnt = 0;
    cin >> N >> K;

    for(int i = N; i > 0; i--){
        if(N % i == 0){
            cnt++;

            if(cnt == K){
                cout << N / i << "\n";
                return 0;
            }
        }
    }

    cout << 0 << "\n";
}