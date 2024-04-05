#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;

    cin >> N >> M;

    int arr[N];
    
    for(int i = 0; i < N; i++){
        arr[i] = i+1;
    }

    for(int a = 0; a < M; a++){
        int i, j;
        cin >> i >> j;

        int temp = arr[i-1];
        arr[i-1] = arr[j-1];
        arr[j-1] = temp;
    }

    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
}