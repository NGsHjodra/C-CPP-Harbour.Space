#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    //bool isSame = false;
    char lastChar = '`';
    int cnt = 0;

    string n_s;
    for (const char &c : s){
        if (c == lastChar) {
            cnt++;
            if (cnt < 2) {
                n_s += c;
            }
        }else {
            cnt = 0;
            lastChar = c;
            n_s += c;
        }
    }
    cout << n_s << endl;
    return 0;
}