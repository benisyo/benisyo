#include <bits/stdc++.h>
using namespace std;

int keta(int x){
    int sum = 0;
    while (x != 0){
        sum += (x % 10);
        x /= 10;
    }
    return sum;
}

int main(){
    int N, A, B;
    int ketasum;
    int ans = 0;
    cin >> N >> A >> B;
    for (int i = 1; i <= N; ++i){
        ketasum = keta(i);
        if ((ketasum >= A) && (ketasum <= B)) ans += i;
    }
    cout << ans << endl;
    return 0;
}