#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {1, 1, 2, 2, 2, 8};

    for(int i = 0; i < 6; i++){
        int a;
        cin >> a;

        arr[i] -= a;
    }

    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
}