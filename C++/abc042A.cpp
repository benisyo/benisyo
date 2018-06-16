#include <bits/stdc++.h>
using namespace std;

int main(){
    int cnt_five = 0;
    int cnt_seven = 0;
    vector<int> bun(3);
    cin >> bun.at(0) >> bun.at(1) >> bun.at(2);

    for (int i=0; i<3; i++){
        if (bun.at(i) == 5) cnt_five++;
        else if (bun.at(i) == 7) cnt_seven++;
    }

    if ((cnt_five == 2) && (cnt_seven == 1)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}