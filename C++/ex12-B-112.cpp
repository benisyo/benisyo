#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int num_one = (S.size() + 1) / 2;
    int num_op = num_one - 1;
    int cnt = 0;
    for (int i = 0; i < num_op; i++ ) {
        if (S.at(2*i + 1) == '+') {
            ++cnt;
        }
        else{
            --cnt;
        }
    }
    cout << 1 + cnt << endl;
}