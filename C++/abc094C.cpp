#include <bits/stdc++.h>
using namespace std;

struct ipair {int idx, v; };

int main (){
    int n,center;
    scanf("%d", &n);
    vector<ipair> a(n);
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a.at(i).v);
        a.at(i).idx = i;
    }

    //vをキーとして、昇順にソートする
    sort(a.begin(), a.end(), 
    [](const ipair& x, const ipair& y) { return x.v < y.v;} );
    center = (n/2);

    for(int i = 0; i < n; i++)
    {
        if (i < center) ans.at(a.at(i).idx) = a.at(center).v;
        else ans.at(a.at(i).idx) = a.at(center-1).v;
    }

    for (int i = 0; i < n; i++) printf("%d\n", ans.at(i) );

    return 0;
}