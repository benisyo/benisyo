#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> A, int n, int key)
{
    int i = 0;
    A.at(n) = key;
    while ( A.at(i) != key) i++;
    return i;
}

int binarySearch(vector<int> A, int key)
{
    int left = 0;
    int right = A.size();
    int mid;

    while (left < right)
    {
        mid = (left + right) / 2;
        if (key == A.at(mid)) return mid;
        if (key > A.at(mid)) left = mid + 1;
        else if(key < A.at(mid)) right = mid;
    }

    return -1;
}

int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A.at(i);

    cout << binarySearch(A, 2) << endl;

    return 0;
}