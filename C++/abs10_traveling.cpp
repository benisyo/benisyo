#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> t(N+1);
    vector<int> x(N+1);
    vector<int> y(N+1);
    int jikan, dis;
    bool can = true;
    for (int i = 1; i <= N; ++i) cin >> t.at(i) >> x.at(i) >> y.at(i);

    for (int i = 0; i < N; ++i){
        jikan = t.at(i + 1) - t.at(i);
        dis = abs(x.at(i + 1) - x.at(i)) + abs(y.at(i + 1) - y.at(i));

        if ( ( (dis % 2) == (jikan % 2) ) && (dis <= jikan) ){
            continue;
        }
        else{
            can = false;
            break;
        }
    } 

    if (can) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}