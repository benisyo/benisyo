#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, Y;
    cin >> N >> Y;
    int x, y, z;
    bool ans = false;
    for (int fuk = 0; (10000 * fuk) <= Y; ++fuk){
        for (int hig = 0; (5000 * hig) <= (Y - 10000 * fuk); ++hig){
            if (Y == 10000 * fuk + 5000 * hig + 1000 * (N - hig - fuk)){
                //x = fuk;
                //y = hig;
                //z = N - fuk - hig;
                cout << fuk << ' ' << hig << ' ' << N - fuk - hig << endl;
                return 0;
                //ans = true;
            }
        }
    }

    cout << -1 << ' ' << -1 << ' ' << -1 << endl;
    return 0;
}