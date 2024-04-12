#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, total = 0;
    cin >> N;

    int arr[N];

    string s;
    cin >> s;

    for(int i = 0; i < N; i++){
        arr[i] = stoi(s.substr(i, 1));
        total += arr[i];
    }

    cout << total << "\n";
}