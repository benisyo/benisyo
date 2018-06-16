#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> S;
    int a, b, x;
    string s;

    while (cin >> s){
        if(s.at(0) == '+'){
            a = S.top(); S.pop();
            b = S.top(); S.pop();
            S.push(a + b);
        }
        else if(s.at(0) == '-'){
            b = S.top(); S.pop();
            a = S.top(); S.pop();
            S.push(a - b);
        }
        else if(s.at(0) == '*'){
            a = S.top(); S.pop();
            b = S.top(); S.pop();
            S.push(a * b);
        }
        else{
            S.push(stoi(s));
        }
    }

    cout << S.top() << endl;

    return 0;
}
