#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x, amari;
    cin >> x;
    amari = x % 11;
    if( amari > 6 )
    {
        cout << 2*(x/11) + 2 << endl;
    }
    else if ( amari >=1 && amari <=6 )
    {
        cout << 2*(x/11) + 1 << endl;
    }
    else
    {
        cout << 2*(x/11) << endl;
    }

    return 0;
}