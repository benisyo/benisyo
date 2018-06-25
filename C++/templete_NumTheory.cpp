#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ullong;

#define MAX 10005

//素数判定
bool isprime(int x){
    if (x == 2) return true;

    if (x < 2 || x % 2 == 0) return false;

    for (int i = 3; i*i <= x; i += 2)
    {
        if (x % i == 0) return false;
    }
    return true;
}

//素数判定（エラトステネスの篩）
bool isprime[MAX] = {};
void eratos(int n){
    for (int i = 0; i <= n; i++) isprime[i] = true;

    isprime[0] = false;
    isprime[1] = false;

    int j;
    for (int i = 2; i*i <= n; i++)
    {
        if (isprime[i])
        {
            j = i + i;
            while (j <= n)
            {
                isprime[j] = false;
                j += i;
            }
        }
    }
    return;
}

//再帰関数による最大公約数
int gcd(int x, int y){
    return y ? gcd(y, x % y) : x;
}

//ループによる最大公約数
int gcd(int x, int y){
    int r;
    if (x < y) swap(x, y); //y < xを保証する

    while (y > 0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}

//m*nが型の上限を超えないことが保証されている場合の最小公倍数
long long lcm(long long m, long long n){
    long long ans;
    if (m > n) ans = ( m / (gcd(m, n)) ) * n;
    else ans = (n / (gcd(m, n)) ) * m;

    return ans;
}

//繰り返し自乗法
ullong power(ullong x, ullong n, ullong M){
    ullong res = 1;
    if ( n > 0 )
    {
        res =power(x ,n/2, M);
        if (n%2 == 0) res = (res * res) % M;
        else res = ( ((res * res) % M) * x) % M;
    }
    return res;
}

