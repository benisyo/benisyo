#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    string s;
    bool flag = true;
    cin >> a >> b >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if(i == a)
        {
            if (s.at(i) != '-')
            {
                flag = false;
                break;
            }
        }
        else
        {
            if (s.at(i) < '0' || s.at(i) > '9')
            {
                flag = false;
                break;
            }
        }
    }

    if (flag) cout << "Yes";
    else cout << "No";

    return 0;
}