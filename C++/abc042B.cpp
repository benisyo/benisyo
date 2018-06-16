#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, L;
    cin >> N >> L;
    vector<string> stlist(N);
    string ans = "";
    for (int i = 0; i < N; i++) cin >> stlist.at(i);

    sort(stlist.begin(), stlist.end());

    for (int i = 0; i < N; i++) ans += stlist.at(i);

    cout << ans << endl;

    return 0;
}