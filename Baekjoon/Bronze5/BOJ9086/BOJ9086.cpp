#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        string s;
        cin >> s;

        cout << s.substr(0, 1) << s.substr(s.length()-1, 1) << "\n";
    }
}