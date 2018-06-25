#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, maxv, minv;
    cin >> n;
    vector<int> R(n);
    cin >> R.at(0);
    minv = R.at(0);
    maxv = -2000000000;
    for (int i = 1; i < n; ++i){
        cin >> R.at(i);
        maxv = max(maxv, R.at(i) - minv);
        minv = min(minv, R.at(i));
    }
    cout << maxv << endl;
}