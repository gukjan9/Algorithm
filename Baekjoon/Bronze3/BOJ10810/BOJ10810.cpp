#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;

    cin >> N >> M;

    int arr[N];
    fill_n(arr, N, 0);

    for(int a = 0; a < M; a++){
        int i, j, k;
        cin >> i >> j >> k;

        while(i <= j){
            arr[i-1] = k;
            i++;
        }
    }

    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
}