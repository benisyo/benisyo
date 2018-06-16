#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    vector<char> ans;

    cin >> s;
    int nm = s.size();

    for (int i = 0; i < nm; i++){
        if(s.at(i) == 'B'){
            if(!ans.empty()){
                ans.pop_back();
            }
        }
        else{
            ans.push_back(s.at(i));
        }
    }

    for (int i = 0; i < ans.size(); i++) cout << ans.at(i);

    return 0;
}