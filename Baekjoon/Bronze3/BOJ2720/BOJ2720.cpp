#include <bits/stdc++.h>
using namespace std;

int main(){
    int Q = 25, D = 10, N = 5, P = 1;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int total;
        cin >> total;

        int temp;
        temp = total / Q;
        cout << temp << " ";
        
        total -= temp * Q;
        temp = total / D;
        cout << temp << " ";

        total -= temp * D;
        temp = total / N;
        cout << temp << " ";

        total -= temp * N;
        temp = total / P;
        cout << temp << "\n";
    }
}