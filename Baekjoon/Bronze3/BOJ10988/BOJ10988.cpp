#include <bits/stdc++.h>
using namespace std;

int main(){
    int result = 1;
    string s;
    cin >> s;

    if(s.length() % 2 == 0){
        for(int i = 0; i < s.length() / 2; i++){
            if(s[i] != s[s.length() - 1 - i]){
                result = 0;
                break;
            }
        }
    }

    else{
        for(int i = 0; i <= s.length() / 2; i++){
            if(s[i] != s[s.length() - 1 - i]){
                result = 0;
                break;
            }
        }
    }

    cout << result << "\n";
}