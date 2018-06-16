#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, y;
    int i = 0;
    cin >> x >> y;

    while(x <= y)
    {
        x *= 2;
        ++i;
    }
    cout << i << endl;
}