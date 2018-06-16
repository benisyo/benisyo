#include <bits/stdc++.h>
using namespace std;

int gridsearch(vector<vector<int>> m, int row, int col){
    int cnt = 0;
    for (int i = -1; i <= 1; i++){
        for (int j = -1; j <= 1; j++){
            if ((i != 0) || (j != 0)){
                cnt += m.at(row + i).at(col + j);
            }
        }
    }

    return cnt;
}


int main(){
    int h,w;
    cin >> h >> w;
    string s;
    vector<vector<int>> F;
    F.resize(h+2);
    for (int i = 0; i < h + 2; i++){
        F.at(i).resize(w+2);
        for (int j = 0; j < w + 2; j++){
            F.at(i).at(j) = {};
        }
    }
    /*二次元配列での初期化
	int a, b;
	vector<vector<int> > vc(a, vector<int>(b) ); // vc[a][b]と同じ
    三次元の場合
    int a, b, c;
	vector<vector<vector<int> > > vc(a, vector<vector<int> >(b, vector<int>(c))); // vc[a][b][c]と同じ
    */

    char c;
    for (int i = 1; i <= h; i++){
        for (int j = 1; j <= w; j++){
            cin >> c;
            if (c == '#') ++F.at(i).at(j);
        }
    }

    for (int i = 1; i <= h; i++){
        for (int j = 1; j <= w; j++){
            if (F.at(i).at(j) == 0){
                cout << gridsearch(F, i, j);
            }
            else{
                cout << '#';
            }
        }
        cout << endl;
    }

    return 0;
}