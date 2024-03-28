#include <bits/stdc++.h>
using namespace std;

int main(){
    int H, M;
    cin >> H >> M;

    if(H == 0 && M < 45){
        H = 23;
        cout << H << " " << M+60-45 << "\n";
    }
    else{
        if(M >= 45){
            cout << H << " " << M-45 << "\n";
        }
        else{
            cout << H-1 << " " << M+60-45 << "\n";
        }
    }
}