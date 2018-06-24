#include <bits/stdc++.h>
using namespace std;

int main(){

    int a,b;
    cin >> a >> b;
    cout << a << " " << b << endl;

    char c[10];
    cin >> c[0];
    cout << c[0] << endl;

    vector<long long> v(100);
    for (int i = 0; i < 100; i++)
    {
        v.at(i) = i;
    }
    cout << v.at(0) << " " << v.at(23) << " " << v.at(99) << endl;

    string s;
    cin >> s;
    cout << s << endl;

    return 0;
}