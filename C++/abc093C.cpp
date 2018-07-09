#include <bits/stdc++.h>
using namespace std;

int main (){
    vector<int> a(3);
    int d;
    cin >> a.at(0) >> a.at(1) >> a.at(2);

    sort(a.begin(), a.end());

    d = (a.at(2) - a.at(1)) + (a.at(2) - a.at(0));
    if ( d % 2 == 0 )
    {
        cout << d/2 << endl;
    }
    else
    {
        cout << d/2 + 2 << endl;
    }

    return 0;
}