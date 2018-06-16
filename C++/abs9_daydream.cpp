#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> divide(4);
    divide = {"dream", "dreamer", "erase", "eraser"};
    string S;
    bool flag = true;
    bool can = false;
    int ichi = 0;
    int cnt;
    cin >> S;
    reverse(S.begin(), S.end());
    for (int i = 0; i < divide.size(); ++i) reverse(divide.at(i).begin(), divide.at(i).end());
    while(flag){
        flag = false;
        for(int i = 0; i < 4; ++i){
            cnt = 0;
            for(int j = 1; j <= divide.at(i).size(); ++j){
                if(S.substr(ichi, divide.at(i).size()) == divide.at(i)) cnt++;
            }
            if (cnt == divide.at(i).size()){
                flag = true;
                ichi += divide.at(i).size();
            }
        }
        if (ichi == S.size()) {
            flag = false;
            can = true;
        }
    }

    if (can) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}