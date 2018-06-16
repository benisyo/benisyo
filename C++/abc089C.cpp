#include <bits/stdc++.h>
using namespace std;

const int MNUM = 12;
const int ANUM = 0;
const int RNUM = 17;
const int CNUM = 2;
const int HNUM = 7;

int main(){
    int n;
    scanf("%d", &n);
    char name[15];
    vector<long long> abc(26);
    long long ans;

    for (int i = 0; i < n; i++)
    {
        scanf("%s", name);
        abc.at((name[0] - 'A'))++;
    }

    ans = (abc.at(MNUM) * abc.at(ANUM) * abc.at(RNUM)) +
          (abc.at(MNUM) * abc.at(ANUM) * abc.at(CNUM)) +
          (abc.at(MNUM) * abc.at(ANUM) * abc.at(HNUM)) +
          (abc.at(MNUM) * abc.at(RNUM) * abc.at(CNUM)) +
          (abc.at(MNUM) * abc.at(RNUM) * abc.at(HNUM)) +
          (abc.at(MNUM) * abc.at(CNUM) * abc.at(HNUM)) +
          (abc.at(ANUM) * abc.at(RNUM) * abc.at(CNUM)) +
          (abc.at(ANUM) * abc.at(RNUM) * abc.at(HNUM)) +
          (abc.at(ANUM) * abc.at(CNUM) * abc.at(HNUM)) +
          (abc.at(RNUM) * abc.at(CNUM) * abc.at(HNUM));

    cout << ans << endl;

    return 0;
}