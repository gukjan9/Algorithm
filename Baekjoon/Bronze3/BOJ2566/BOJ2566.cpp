#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int max = 0, row = 1, col = 1;

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> N;
            if(N > max){
                max = N;
                row = i+1;
                col = j+1;
            }
        }
    }

    cout << max << "\n" << row << " " << col << "\n";
}