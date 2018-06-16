#include <bits/stdc++.h>
using namespace std;

bool gridsearch(vector<vector<int>> m, int row, int col){
    bool flag = false;

    if (m.at(row).at(col+1) == 1) flag = true;
    if (m.at(row).at(col-1) == 1) flag = true;
    if (m.at(row+1).at(col) == 1) flag = true;
    if (m.at(row-1).at(col) == 1) flag = true;

    return flag;
}

int main(){
    int h,w;
    cin >> h >> w;
	vector<vector<int> > F(h+2, vector<int>(w+2));

    char c;
    for (int i = 1; i <= h; i++){
        for (int j = 1; j <= w; j++){
            cin >> c;
            if (c == '#') ++F.at(i).at(j);
        }
    }

    bool can = true;
    for (int i = 1; i <= h; i++){
        for (int j = 1; j <= w; j++){
            if (F.at(i).at(j) == 1){
                if(!gridsearch(F, i, j)) {
                    can = false;
                    break;
                }
            }
        }
    }

    if (can) cout << "Yes";
    else cout << "No";

    return 0;
}