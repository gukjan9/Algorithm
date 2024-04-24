#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    int arrA[100][100] = {0, };
    int arrB[100][100] = {0, };
    int arrC[100][100] = {0, };

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> arrA[i][j];
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> arrB[i][j];
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            arrC[i][j] = arrA[i][j] + arrB[i][j];
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cout << arrC[i][j] << " ";
        }
        cout << "\n";
    }
}