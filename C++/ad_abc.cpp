#include <bits/stdc++.h>
using namespace std;

int main() {
    string m_ad;
    string aaa = "" ;
    cin >> m_ad;
    //vector<string> dotar(m_ad.size()- 1);
    string s;
    int count = 0;
    vector<int> dotnum(m_ad.size());
    for (dotnum.at(0) = 0; dotnum.at(0) < 2; dotnum.at(0)++){
        for (dotnum.at(1) = 0; dotnum.at(1) < 2; dotnum.at(1)++){
            for (dotnum.at(2) = 0; dotnum.at(2) < 2; dotnum.at(2)++){
                for (dotnum.at(3) = 0; dotnum.at(3) < 2; dotnum.at(3)++){
                    for (dotnum.at(4) = 0; dotnum.at(4) < 2; dotnum.at(4)++){
                        for (dotnum.at(5) = 0; dotnum.at(5) < 2; dotnum.at(5)++){
                            for (dotnum.at(6) = 0; dotnum.at(6) < 2; dotnum.at(6)++){
                                for (dotnum.at(7) = 0; dotnum.at(7) < 2; dotnum.at(7)++){
                                    for (dotnum.at(8) = 0; dotnum.at(8) < 2; dotnum.at(8)++){
                                        for (dotnum.at(9) = 0; dotnum.at(9) < 2; dotnum.at(9)++){
                                            for (dotnum.at(10) = 0; dotnum.at(10) < 2; dotnum.at(10)++){
                                                for (dotnum.at(11) = 0; dotnum.at(11) < 2; dotnum.at(11)++){
                                                    for (dotnum.at(12) = 0; dotnum.at(12) < 2; dotnum.at(12)++){
                for (int i = 0; i < m_ad.size() - 1; ++i){
                    if (dotnum.at(i) == 1){
                        s = ".";
                    }
                    else {
                        s = "";
                    }
                    cout << m_ad.at(i) << s;
                }
                count++;
                cout << m_ad.at(m_ad.size() - 1) << "@gmail.com" ;
                cout << endl;
            }}}}}}}}}}}
        }
    }
    cout << count << endl;
}