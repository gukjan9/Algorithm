#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C, D, E;
    cin >> A >> B >> C;

    B += C;

    if(B >= 60){
        D = B / 60;
        A += D;
        B -= D * 60;

        if(A >= 24){
            E = A / 24;
            A -= 24 * E;
        }
    }

    cout << A << " " << B << "\n";
}