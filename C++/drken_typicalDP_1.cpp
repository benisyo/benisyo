#include <bits/stdc++.h>
using namespace std;

int n;
int a[10100];

int dp[10100];

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    dp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        dp[i+1] = max(dp[i], dp[i]+a[i]);
    }

    printf("%d", dp[n]);

    return 0;

}