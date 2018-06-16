#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    int Alice, Bob = 0;
    for (int i = 0; i < N; ++i) cin >> a.at(i);

    sort(a.begin(), a.end(), greater<int>());
 //   reverse(a.begin(), a.end());

    for (int i = 0; i < N; i++){
        if (((i + 1)%2) == 1){
            Alice += a.at(i);
        }
        else{
            Bob += a.at(i);
        }
    }

    cout << Alice - Bob << endl;
    return 0;
}