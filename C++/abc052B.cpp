#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x = 0, max = 0;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s.at(i) == 'I') ++x;
        else --x;

        if (max < x) max = x;
    }
    cout << max << endl;
}