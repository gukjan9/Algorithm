#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    string a = to_string(A);
    string b = to_string(B);

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    if(stoi(a) > stoi(b)) cout << a << "\n";
    else cout << b << "\n";
}