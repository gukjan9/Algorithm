#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, min=1000000, max=-1000000;
    cin >> N;

    int arr[N];

    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < N; i++){
        if(arr[i] > max){
            max = arr[i];
        }

        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout << min << " " << max << "\n";
}