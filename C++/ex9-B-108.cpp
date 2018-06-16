#include <bits/stdc++.h>
using namespace std;

int main() {
    int x , a , b;
    cin >> x >> a >> b;

    //1output
    x++;
    cout << x << endl;

    //2output
    x *= a + b;
    cout << x << endl;

    //3output
    x *= x;
    cout << x << endl;

    //4output
    x--;
    cout << x << endl;
}