#include <bits/stdc++.h>
using namespace std;

//挿入ソート（整数）
void insertionSort(vector<int> &A){
    int j,v;
    for(int i = 1; i < A.size(); ++i){
        v = A.at(i);
        j = i - 1;
        while((j >= 0) && (A.at(j) > v)){
            A.at(j+1) = A.at(j);
            j--;
        }
        A.at(j+1) = v;
    }
}


//テスト用メイン

int main(){
    vector<int> an = {3,4,5,1,2};
    
    //↓に試したい関数を記述する
    insertionSort(an);
    for(int i = 0; i < an.size(); i++){
        cout << an.at(i) << endl;
    }
    return 0;
}
