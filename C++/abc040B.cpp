#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, amari;
    bool flag = false;

    cin >> a >> b >> c;
    amari = a % b;

    for (int i = 1; i <= 100; i++){
        if ((amari * i ) % b == c){
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}