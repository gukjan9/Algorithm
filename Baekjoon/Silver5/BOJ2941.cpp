#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    cin >> s;

    int i = 0;
    int cnt = 0;

    while(i < s.length()){
        if ((s[i] == 'c' && s[i+1] == '=') || (s[i] == 's' && s[i+1] == '=') || (s[i] == 'z' && s[i+1] == '=')) {
            cnt++;
            i += 2;
        }
        else if ((s[i] == 'c' && s[i+1] == '-') || (s[i] == 'd' && s[i+1] == '-')) {
            cnt++;
            i += 2;
        }
        else if (s[i] == 'd' && s[i+1] == 'z' && s[i+2] == '=') {
            cnt++;
            i += 3;
        }
        else if ((s[i] == 'l' && s[i+1] == 'j') || (s[i] == 'n' && s[i+1] == 'j')) {
            cnt++;
            i += 2;
        }
        else {
            cnt++;
            i++;
        }
    }

    cout << cnt << "\n";
}