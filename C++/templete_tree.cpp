#include <bits/stdc++.h>
using namespace std;

#define MAX 100005
#define NIL -1

//pが親でlは最も左の子でrはすぐ右の兄弟
struct Node { int p, l, r; };

Node T[MAX];
int n, D[MAX];

//uはある節点の番号
void print(int u){
    int i, c;
    cout << "node" << u << ": ";
    cout << "parent = " << T[u].p << ", ";
    cout << "depth = " << D[u] << ", ";

    if (T[u].p == NIL) cout << "root, ";
    else if (T[u].l == NIL) cout << "leaf, ";
    else cout << "internal node, ";

    cout << "[";

    for (int i = 0, c = T[u].l; c != NIL; i++, c = T[c].r)
    {
        if (i) cout << ", ";
        cout << c;
    }
    cout << "]" << endl;
}

//再帰的に深さを求める。
int rec(int u, int p){
    D[u] = p;
    if (T[u].r != NIL) rec(T[u].r, p); //右の兄弟に同じ深さを設定
    if (T[u].l != NIL ) rec(T[u].l,); //最も左の子に自分の深さ+1を設定
}

int main(){

    return 0;
}