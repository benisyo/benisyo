#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    int cnt = 0;
    bool itr = true;
    for (int i = 0; i < N; ++i){
        cin >> A.at(i);
    }
    
    while (itr){
        for (int i = 0; i < N; ++i){
            if (A.at(i) % 2 == 0){
                A.at(i) /= 2;
            }
            else{
                itr = false;
            }
        }

        if (itr) cnt++;        
    }

    cout << cnt << endl;
    return 0;
}