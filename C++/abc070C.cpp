#include <bits/stdc++.h>
using namespace std;


//再帰関数による最大公約数
long long gcd(long long x, long long y){
    return y ? gcd(y, x % y) : x;
}

//m*nが型の上限を超えないことが保証されている場合の最小公倍数
long long lcm(long long m, long long n){
    long long ans;
    if (m > n) ans = ( m / (gcd(m, n)) ) * n;
    else ans = (n / (gcd(m, n)) ) * m;

    return ans;
}

int main(){
    int n;
    long long l,m;
    cin >> n;

    cin >> l;
    for (int i = 1; i < n; i++)
    {
        cin >> m;
        l = lcm(l,m);
    }

    cout << l << endl;

}