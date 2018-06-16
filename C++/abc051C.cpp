#include <bits/stdc++.h>
using namespace std;

void repri(int r, char direction){
    for (int i = 0; i < r; i++)
    {
        printf("%c", direction);
    }
    return;
}

int main(){
    int sx,sy,tx,ty;
    scanf("%d%d%d%d", &sx, &sy, &tx, &ty);
    //cout << sx << ',' << sy << endl;
    //cout << tx << ',' << ty << endl;
    int xdis = tx - sx, ydis = ty - sy;
    //cout << xdis << ',' << ydis;
    
    repri(xdis, 'R');
    repri(ydis, 'U');
    repri(xdis, 'L');
    repri(ydis, 'D');
    repri(1, 'D');
    repri(xdis + 1, 'R');
    repri(ydis + 1, 'U');
    repri(1, 'L');
    repri(1, 'U');
    repri(xdis + 1, 'L');
    repri(ydis + 1, 'D');
    repri(1, 'R');

    return 0;
}