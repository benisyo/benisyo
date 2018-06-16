#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, x;
    const long long zero = 0;
    cin >> a >> b >> x;
    
    cout << (b/x) - (max(zero,a-1)/x) + (a==0);
}