#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[42];
    fill_n(arr, 42, 0);
    int cnt = 0;

    for(int i = 0; i < 10; i++){
        int n;
        cin >> n;

        if(!arr[n%42]) arr[n%42] = 1;
    }

    for(int i = 0; i < 42; i++){
        if(arr[i]) cnt++;
    }

    cout << cnt << "\n";
}