#include <bits/stdc++.h>
using namespace std;

int combi(int x, int y, int z){
    if ( (x == y) )
    {
        if (y < z) return 3;
        else return 1;
    }
    else
    {
        if (y < z) return 6;
        else return 3;
    }
}

int main(){
    int k, s; 
    long long ans = 0;
    cin >> k >> s;

    for (int x = 0; x <= k; x++)
    {
        for (int y = x; y <= k; y++)
        {
            for (int z = y; z <= k; z++)
            {
                if ( (x + y + z) == s )
                {
                    ans += combi(x, y, z);
                }
            }
        }
    }

    cout << ans << endl;
}