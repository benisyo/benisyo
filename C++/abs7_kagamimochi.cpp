#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    set<int> s;
    vector<int> d(N);
    for (int i = 0; i < N; i++){
        cin >> d.at(i);
        s.insert(d.at(i));
    }

    cout << s.size() << endl;

    return 0;
}