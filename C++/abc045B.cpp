#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> s(3);
    bool flag = true;
    char card,kachi;
    int a, b, c;
    a = 0; b = 0; c = 0;
    cin >> s.at(0) >> s.at(1) >> s.at(2);
    card = 'a';
    while(flag){
        if (card == 'a') {
            //a++;
            if (a+1 <= s.at(0).size()){
                card = s.at(0).at(a);
            }
            else{
                cout << 'A';
                break;
            }
            a++;
        }
        else if (card == 'b') {
            //b++;
            if (b+1 <= s.at(1).size()){
                card = s.at(1).at(b);
            }
            else{
                cout << 'B';
                break;
            }
            b++;
        }
        else {
            //c++;
            if (c+1 <= s.at(2).size()){
                card = s.at(2).at(c);
            }
            else{
                cout << 'C';
                break;
            }
            c++;
        }
    }

    

    return 0;
}