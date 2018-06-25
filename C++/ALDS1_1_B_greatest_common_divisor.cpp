#include <bits/stdc++.h>
using namespace std;

/*再帰関数による最大公約数
int gcd(int x, int y){
    return y ? gcd(y, x % y) : x;
}
*/

//ループによる最大公約数
int gcd(int x, int y){
    int r;
    if (x < y) swap(x, y); //y < xを保証する

    while (y > 0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int main(){
    int x,y;
    cin >> x >> y;
    cout << gcd(x,y) << endl;

    return 0;
}