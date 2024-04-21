#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    cin >> s;

    int arr[91] = {0};
    int max = 0, flag = 0;
    char result = 63;

    for(int i = 0; i < s.length(); i++){
        if(int(s[i]) >= 97) arr[int(s[i]) - 32]++;
        else arr[int(s[i])]++;
    }

    for(int i = 0; i < 26; i++){
        if(arr[i + 65] > max) max = arr[i + 65];
    }

    for(int i = 0; i < 26; i++){
        if(arr[i + 65] == max && flag >= 1){
            result = 63;
            break;
        }

        if(arr[i + 65] == max){
            flag++;
            result = i + 65;
        }
    }

    cout << result << "\n";
}