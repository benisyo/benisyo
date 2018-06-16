#include <bits/stdc++.h>
using namespace std;

int main() {
    int i = 2;
    double d = 10.5;
    double ji = 10.5;
    int i2 = d;
    string s = "Hello";

    cout << d / i << endl;
    cout << i + d << endl;
    cout << s << endl;
    cout << i * d << endl;
    //ここから型の取得
    cout << typeid(3).name() << endl;
    cout << typeid(3.0).name() << endl;
    cout << typeid(ji).name() << endl;
    cout << typeid(i * d).name() << endl;
    //ここまで型の取得
    cout << i2 << endl;
}