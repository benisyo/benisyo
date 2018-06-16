#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, sum, ave;
    cin >> N;
    vector<int> A(N);
    //入力と合計
    for (int i = 0; i < N; ++i){
        cin >> A.at(i);
        sum += A.at(i);
    }
    //平均とその差
    ave = sum / N;
    for (int i = 0; i < N; ++i) {
        if (ave > A.at(i)) {
            cout << ave - A.at(i) << endl;
        }
        else {
            cout << A.at(i) - ave << endl;
        }
    }

}