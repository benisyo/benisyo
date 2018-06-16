#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0, s=0, w=0, M = -1;
    cin >> n;
    vector<vector<int>> a(2, vector<int>(n+2));

    for(int i = 0; i < 2; i++){
        for (int j = 1; j <= n; j++){
            cin >> w;
            s += w;
            a.at(i).at(j) = s;
        }
        s = 0;
    }

    for (int x = 1; x <= n; x++){
        w = a.at(0).at(x) + a.at(1).at(n) - a.at(1).at(x-1);
        if(M < w) M = w;
    }

    cout << M;
    
}