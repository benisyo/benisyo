#include <bits/stdc++.h>
using namespace std;



int main(){
    int w, h, n, x, y, a;
    cin >> w >> h >> n;
    vector<int> x_interval(2);
    vector<int> y_interval(2);
    x_interval.at(1) = w;
    y_interval.at(1) = h;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> a;
        if (a == 1)
        {
            x_interval.at(0) = max(x_interval.at(0), x);
            x_interval.at(1) = max(x_interval.at(1), x);
        }
        if (a == 2)
        {
            x_interval.at(0) = min(x_interval.at(0), x);
            x_interval.at(1) = min(x_interval.at(1), x);
        }
        if (a == 3)
        {
            y_interval.at(0) = max(y_interval.at(0), y);
            y_interval.at(1) = max(y_interval.at(1), y);
        }
        if (a == 4)
        {
            y_interval.at(0) = min(y_interval.at(0), y);
            y_interval.at(1) = min(y_interval.at(1), y);
        }
    }

    cout << (x_interval.at(1) - x_interval.at(0)) * (y_interval.at(1) - y_interval.at(0)) << endl;

    return 0;

}