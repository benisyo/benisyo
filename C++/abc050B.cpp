#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, p, x, sum = 0;
    cin >> n;
    vector<int> t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> t.at(i);
        sum += t.at(i);
    }
    cin >> m;
    
    for (int i = 0; i < m; i++)
    {
        cin >> p >> x;
        cout << sum - t.at(p - 1) + x << endl;
    }

    return 0;
}