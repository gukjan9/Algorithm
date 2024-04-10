#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, max = 0;
    float total = 0;
    cin >> N;

    int arr[N];

    for(int i = 0; i < N; i++){
        int score;
        cin >> score;
        arr[i] = score;

        if(score > max) max = score;
    }

    for(int i = 0; i < N; i++){
        total += (arr[i] / (float)max * 100);
    }

    cout << total / (float)N << "\n";
}