#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    int answer;
    cin >> a >> b >> c;

    if(a == b && b == c && a == c){
        answer = 10000 + a*1000;
    }
    else if(a == b || a == c){
        answer = 1000 + a*100;
    }
    else if(b == c){
        answer = 1000 + b*100;
    }
    else{
        if(a > b){
            answer = a*100;
            if(a < c){
                answer = c*100;
            }
        }
        else{
            answer = b*100;
            if(b < c){
                answer = c*100;
            }
        }
    }
    cout << answer << "\n";
}