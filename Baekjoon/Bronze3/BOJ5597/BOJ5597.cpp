#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[30];

    for(int i = 0; i < 30; i++){
        arr[i] = i+1;
    }

    for(int i = 0; i < 28; i++){
        int n;
        cin >> n;

        for(int j = 0; j < 30; j++){
            if(arr[j] == n) arr[j] = 0;
        }
    }

    for(int i = 0; i < 30; i++){
        if(arr[i] != 0) cout << arr[i] << "\n";
    }
}

// 해당 숫자를 찾아서 제거하는 방식보단
// 빈 배열 선언 후 제출자 번호 자체를 배열에 표시해 마지막에 표시 되지 않은 번호만 출력
// -> 이중 for문 제거 가능