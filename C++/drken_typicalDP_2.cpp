#include <bits/stdc++.h>
using namespace std;

int N,W;

struct goods { int w, v; };

vector<goods> a(110);
int dp[110][10010] = {};


int main()
{
    scanf("%d%d", &N, &W);
    for (int i = 0; i < N; i++) scanf("%d%d", &a.at(i).v, &a.at(i).w );

    for (int i = 0; i < N; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (a.at(i).w <= w)
            {
                dp[i+1][w] = max( dp[i][w-a.at(i).w] + a.at(i).v , dp[i][w] );
            }
            else
            {
                dp[i+1][w] = dp[i][w];
            }
        }
    }

/* 配列dpの表示
    for (int w = 0; w <= W; w++)
    {
        for (int i = 0; i < N; i++)
        {
            cout << "dp[" << i << "][" << w << "] = " << dp[i][w] << endl;
        }
    }
*/

    printf("%d\n", dp[N][W]);

    return 0;
}