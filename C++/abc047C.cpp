#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 0;
    char s[100005];
    scanf("%s", s);
    for (int i = 0; i < (strlen(s) - 1); i++)
    {
        if(s[i] != s[i+1]) ans++;
    }
    printf("%d", ans);
}