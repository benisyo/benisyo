#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    bool fl = false;
    char c;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> c;
        if(c == 'Y'){
            fl = true;
            break;
        }
    }
    if (fl) cout << "Four" << endl;
    else cout << "Three" << endl;
}