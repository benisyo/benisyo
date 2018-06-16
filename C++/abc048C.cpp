#include <bits/stdc++.h>
using namespace std;

int a[100005];

int main()
{
    int n, x;
    long long ans = 0;
    scanf("%d%d", &n,&x);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < (n-1); i++)
    {
        if (a[i] + a[i+1] > x)
        {
            ans += (a[i] + a[i+1]) - x; 
            if(a[i] < x)
            {
                a[i+1] = x - a[i];
//                cout << "a[" << i << "]=" << a[i] << endl;
//                cout << "a[" << i + 1 << "]=" << a[i+1] << endl;
//                cout << "ans[i]=" << ans << endl;
            }
            else
            {
                a[i+1] = 0;
                a[i] = x;
//                cout << "a[" << i << "]=" << a[i] << endl;
//                cout << "a[" << i + 1 << "]=" << a[i+1] << endl;
//                cout << "ans[i]=" << ans << endl;
             }
        }
    }

    printf("%lld\n", ans);

}