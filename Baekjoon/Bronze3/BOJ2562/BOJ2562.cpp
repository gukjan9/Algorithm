#include <bits/stdc++.h>
using namespace std;

int main(){
    int max=0, pos;
    int arr[9];

    for(int i = 0; i < 9; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < 9; i++){
        if(arr[i] > max){
            max = arr[i];
            pos = i+1;
        }
    }

    cout << max << "\n" << pos << "\n";
}