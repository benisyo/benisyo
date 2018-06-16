#include <bits/stdc++.h>
using namespace std;



int main(){
    long long x,i=1;
    cin >> x;

    while( (i*(i+1))/2 < x) 
    {
        i++;
    }

    cout << i << endl;

    return 0;
}