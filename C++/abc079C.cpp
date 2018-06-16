#include <bits/stdc++.h>
using namespace std;

//char型をint型へ変換
int ctoi(char c) {
	if (c >= '0' && c <= '9') {
		return c - '0';
	}
	return 0;
}



int main(){
    string s;
    int seven;
    cin >> s;
    int n = s.size() -1;
    vector<int> a(n+1);
    vector<char> op(n);
    for (int i = 0; i < s.size(); i++){
        a.at(i) = ctoi(s.at(i));
    }
    //cout << a.at(1) << " " << a.at(2);
    
    for (int bit = 0; bit < (1<<n); bit++){
        seven = a.at(0);
        for (int i = 0; i < n; i++){
            if (bit & (1<<i)) {
                op.at(i) = '+';
                seven += a.at(i+1);
            }
            else {
                op.at(i) = '-';
                seven -= a.at(i+1);
            }
        }
        
        if(seven == 7){
            cout << a.at(0) << op.at(0) << a.at(1) << op.at(1) << a.at(2) << op.at(2);
            cout << a.at(3) << "=7";
            break;
        }
    }

    return 0;
}