#include <bits/stdc++.h>
using namespace std;

int main(){
    long long ans = 0;
    int n, t0, t1 ,T;

    cin >> n >> T;
    cin >> t0;
    for (int i = 2; i <= n; i++)
    {
        scanf("%d", &t1);
        ans += min(T, t1 - t0);
        t0 = t1;
    }

    ans += T;
    cout << ans << endl;

}