#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    bool ans = true;
    string w;
    vector<int> moji(26);
    cin >> w;

    for (int i = 0; i < w.size(); i++){
        num = w.at(i) - 'a';
        moji.at(num)++;
    }

    for (int i = 0; i < 26; i++){
        if((moji.at(i) % 2) == 1){
            ans = false;
            break;
        }
    }

    if(ans) cout << "Yes";
    else cout << "No";
    return 0;
}