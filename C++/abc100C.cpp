#include <bits/stdc++.h>
using namespace std;
int twopower[35] = {};

int main() {
    twopower[0] = 1;
    int n,sum = 0;
    scanf("%d", &n);
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a.at(i));
    }
//    cout << a.at(1) << endl;
    for (int i = 1; i <= 30; i++)
    {
        twopower[i] = twopower[i - 1] * 2;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= 30; j++)
        {
            if ( (a.at(i)%twopower[j]) != 0 )
            {
                sum += (j - 1);
                break;
            }
        }
    }

    cout << sum << endl;
}