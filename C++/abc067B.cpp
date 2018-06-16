#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,s = 0;
    cin >> n >> k;
    vector<int> l(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&l.at(i));
    }

    sort(l.begin(), l.end(), greater<int>() );

    for (int i = 0; i < k; i++)
    {
        s += l.at(i);
    }

    cout << s << endl;
}