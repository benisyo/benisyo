#include <bits/stdc++.h>
using namespace std;

#define MAX 100000005

// isprimeによる解答
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


int main(){
    int cnt = 0;
    int n,x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if(isprime(x)) cnt++;
    }

    printf("%d\n", cnt);
    return 0;
}


/*エラトステネスの篩による解答(この問題では、TLE)
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

int main(){
    int cnt = 0;
    int n,x;

    scanf("%d", &n);
    eratos(MAX - 1);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if(isprime[x]) cnt++;
    }
    
    printf("%d\n", cnt);

    return 0;
}
*/
