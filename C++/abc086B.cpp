#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    int c;
    cin >> a >> b;
    a = a + b;
    c = stoi(a);

    for (int i = 1; i <= 316; i++)
    {
        if (c == i*i)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;

}