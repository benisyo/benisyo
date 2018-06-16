#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    long long C;
    cin >> n >> k;
    C = k;
    for (int i = 1; i < n; i++) C *= (k-1);
    cout << C;
    return 0;
}