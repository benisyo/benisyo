#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,x,y,ans;
    cin >> n >> k >> x >> y;
    if (n < k){
        cout << (x * n);
    }
    else{
        cout << (x * k) + (y * (n - k));
    }
    return 0;
}