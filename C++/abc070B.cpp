#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d, ans;
    cin >> a >> b >> c >> d;
    ans = min(b,d) - max(a,c);
    cout << max(ans,0);

    return 0;
}