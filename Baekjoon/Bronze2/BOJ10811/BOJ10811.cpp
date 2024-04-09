#include <bits/stdc++.h>
using namespace std;

int order(int i, int j, int N, int arr[]);

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

        order(i, j, N, arr);
    }

    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
}

int order(int i, int j, int N, int arr[]){
    int temp;

    // 홀수 1-4
    if((j - i) <= 0){
        return arr[N];
    }

    else{
        temp = arr[i-1];
        arr[i-1] = arr[j-1];
        arr[j-1] = temp;

        return order(++i, --j, N, arr);
    }
}