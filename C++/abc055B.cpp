#include <bits/stdc++.h>
using namespace std;

const int sosu = 1000000007; 

int main(){
    int N;
    cin >> N;
    long long a = 1;
    for (int i = 1; i <=N;i++){
        a *= i;
        a = a % sosu;
    }
    cout << a;

    return 0;
}