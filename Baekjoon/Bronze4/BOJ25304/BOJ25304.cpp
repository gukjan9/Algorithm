#include <bits/stdc++.h>
using namespace std;

int main(){
    int X, N, a, b;
    int result = 0;

    cin >> X >> N;

    for(int i = 0; i < N; i++){
        cin >> a >> b;
        result += a*b;
    }

    if(result == X) cout << "Yes" << "\n";
    else cout << "No" << "\n";
}