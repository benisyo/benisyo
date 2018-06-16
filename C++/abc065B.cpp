#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, cnt, z;
    vector<int> v;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%d", &z);
        z--;
        v.push_back(z);
    } 

    int now = 0;
    for (int i = 0; i <= n; i++){
        if (now == 1){
            printf("%d\n" ,i);
            break;
        }

        if (i == n){
            printf("-1\n");
            break;
        }
        now = v.at(now);
    }

    return 0;
}