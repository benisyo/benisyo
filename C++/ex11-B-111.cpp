#include <bits/stdc++.h>
using namespace std;

int main() {
    int a , N;
    cin >> N >> a;
    string op;
    int b;
    //繰り返す
    for (int i = 0; i<N ; i++){
            cin >> op >> b;
        if (op == "+"){
            a += b;
        }
        else if (op == "-"){
            a -= b;
        }
        else if (op == "*"){
            a *= b;
        }
        else if (op == "/") {
            if (b == 0){
                cout << "error" << endl;
                break;
            }
            else{
                a /= b;
            }
        }
        else {
            cout << "error" << endl;
            break;
        }
        cout << i + 1 << ":" << a << endl;
    }

}