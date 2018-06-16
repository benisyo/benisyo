#include <bits/stdc++.h>
using namespace std;

int main(){
    int d,n,k = 1;
    cin >> d >> n;

    for (int i = 0; i < d; i++)
    {
        k *= 100;
    }

    if ( n== 100 ) cout << k*(n + 1) << endl;
    else cout << k * n << endl;

    return 0;
}