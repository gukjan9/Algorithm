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

// reverse 사용 -> 재귀함수 없앨 수 있음
// std::reverse(a+x, a+y+1);
// a+x 인 이유 -> 배열의 이름은 배열의 0번째 인덱스의 주소이기 때문

// 맞힌 사람들을 보면 재귀를 쓴 사람은 보이질 않는다..