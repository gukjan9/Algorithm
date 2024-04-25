#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, cnt = 0;
    cin >> N;

    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        int arr[int('z') + 1] = {0, };

        for(int j = 0; j < s.length(); j++){
            if(arr[(int)s[j]] != 0 && s[j] != s[j-1]){
                cnt--;
                j = s.length();
            }
            arr[(int)s[j]]++;
        }
        cnt++;
    }
    cout << cnt << "\n";
}