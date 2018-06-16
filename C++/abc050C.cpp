#include <bits/stdc++.h>
using namespace std;

//int a[100005];
vector<int> num(100005);
const int pnum = 1000000007;

int main(){
    int n, A;
    long long ans = 1;
    bool flag = true;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A);
        num.at(A)++;
    }
    for (int i = 1; i <= (n+1)/2; i++)
    {
        if (n%2 == 0)
        {
            if(num.at( (2*i) - 1 ) != 2)
            {
                flag = false;
                break;
            }
        }
        else
        {
            if(i == 1)
            {
                if (num.at(0) != 1)
                {
                    flag = false;
                    break;
                }
            }
            else
            {
                if(num.at( 2*(i-1) ) != 2)
                {
                    flag = false;
                    break;
                }
            }
        }
    }

    //for (int i = 0; i < n; i++) cout << "num.at(" << i << ")=" << num.at(i) << endl;
    //cout << "flag=" << flag << endl;

    if(flag)
    {
        if (n%2 == 0)
        {
            for (int i = 0; i < (n/2); i++)
            {
                ans *= 2;
                ans %= pnum;
            }
            printf("%lld\n", ans);
        }
        else 
        {
            for (int i = 0; i < (n-1)/2; i++)
            {
                ans *= 2;
                ans %= pnum;
            }
            printf("%lld\n", ans);
        }
    }
    else
    {
        printf("0\n");
    }

    return 0;
}