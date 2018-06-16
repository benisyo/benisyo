#include <bits/stdc++.h>
using namespace std;

void maildot(string mail, vector<int> dot, int N){
    if (N <= dot.size()){
        for (dot.at(N - 1) = 0; dot.at(N - 1) < 2; dot.at(N - 1)++){
            maildot(mail, dot, N + 1);
        }
    }
    else{
        string s;
        for (int i = 0; i < dot.size(); i++){
            if (dot.at(i) == 1){
                s = ".";
            }
            else{
                s = "";
            }
            cout << mail.at(i) << s;
        }
        cout << mail.at(mail.size() - 1) << "@gmail.com" << endl;
    }
    return;
}

void mailadd(string mail){
    vector<int> dot_num(mail.size() - 1);
    maildot(mail, dot_num, 1);
    return;
}

int main() {
    string m_ad;
    cin >> m_ad;
    mailadd(m_ad);
}