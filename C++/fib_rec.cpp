#include <bits/stdc++.h>
using namespace std;

long long fib(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

long long memo[1000];
bool done[1000];



long long fib_memo(int n){

    if (!done[n-1] && !done[n-2]) {
        memo[n-1] = fib_memo(n-1);
        done[n-1] = true;
        memo[n-2] = fib_memo(n-2);
        done[n-2] = true;        
    }
    else if(done[n-1] && !done[n-2]) {
        memo[n-2] = fib_memo(n-2);
        done[n-2] = true;
    }
    else if(!done[n-1] && done[n-2]) {
        memo[n-1] = fib_memo(n-1);
        done[n-1] = true;
    }
    return (memo[n-1] + memo[n-2]);
}

long long fib_re(int n){
    memo[0] = 0;
    memo[1] = 1;
    for (int i = 2; i <= n; i++){
        memo[i] = memo[i-1] + memo[i-2];
    }
    return memo[n];
}

int main(){
    memo[0] = 0;
    memo[1] = 1;
    done[0] = true;
    done[1] = true;
//    clock_t start = clock();
//    clock_t end;
    cout << fib_re(50) << endl;
//    end = clock();
//    cout << (double)(end - start) / CLOCKS_PER_SEC << endl;
//    start = clock();
    cout << fib_memo(100) << endl;
//    end = clock();
//    cout << (double)(end - start) /CLOCKS_PER_SEC << endl;
    return 0;
}