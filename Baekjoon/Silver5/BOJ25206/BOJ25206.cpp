#include <bits/stdc++.h>
using namespace std;

int main(){
    double arr[9] = {4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0};
    double totalCredit, totalScore = 0;

    for(int i = 0; i < 20; i++){
        string s;
        getline(cin, s);
        
        if(s.substr(s.size()-2) == "A+"){
            totalCredit += stod(s.substr(s.size()-6, 3));
            totalScore += stod(s.substr(s.size()-6, 3)) * arr[0];
        }
        else if(s.substr(s.size()-2) == "A0"){
            totalCredit += stod(s.substr(s.size()-6, 3));
            totalScore += stod(s.substr(s.size()-6, 3)) * arr[1];
        }
        else if(s.substr(s.size()-2) == "B+"){
            totalCredit += stod(s.substr(s.size()-6, 3));
            totalScore += stod(s.substr(s.size()-6, 3)) * arr[2];
        }
        else if(s.substr(s.size()-2) == "B0"){
            totalCredit += stod(s.substr(s.size()-6, 3));
            totalScore += stod(s.substr(s.size()-6, 3)) * arr[3];
        }
        else if(s.substr(s.size()-2) == "C+"){
            totalCredit += stod(s.substr(s.size()-6, 3));
            totalScore += stod(s.substr(s.size()-6, 3)) * arr[4];
        }
        else if(s.substr(s.size()-2) == "C0"){
            totalCredit += stod(s.substr(s.size()-6, 3));
            totalScore += stod(s.substr(s.size()-6, 3)) * arr[5];
        }
        else if(s.substr(s.size()-2) == "D+"){
            totalCredit += stod(s.substr(s.size()-6, 3));
            totalScore += stod(s.substr(s.size()-6, 3)) * arr[6];
        }
        else if(s.substr(s.size()-2) == "D0"){
            totalCredit += stod(s.substr(s.size()-6, 3));
            totalScore += stod(s.substr(s.size()-6, 3)) * arr[7];
        }
        else if(s.substr(s.size()-1) == "F"){
            totalCredit += stod(s.substr(s.size()-5, 3));
            totalScore += stod(s.substr(s.size()-5, 3)) * arr[8];
        }
    }
    
    cout << totalScore / totalCredit << "\n";
}