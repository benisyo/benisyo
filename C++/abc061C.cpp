#include <bits/stdc++.h>
using namespace std;

struct ipair {int a, b; };


int main(){
    int n;
    long long k;
    long long sum=0;
    scanf("%d%lld", &n, &k);
    vector<ipair> p(n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &p.at(i).a, &p.at(i).b);
    }

    //aをキーとして、昇順にソートする
    sort(p.begin(), p.end(), 
    [](const ipair& x, const ipair& y) { return x.a < y.a;} );

    for (int i = 0; i < n; i++)
    {
        sum += p.at(i).b;
        if (sum >= k) 
        {
            printf("%d\n", p.at(i).a);
            break;
        }
    }

    return 0;
}