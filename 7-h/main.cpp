#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt = 0;
    for (char &c: s) {
        if (c >= 'A' && c <= 'Z') {
            cnt++;
        }
    }
    //All caps
    if (cnt == s.length()) {
        for (char &c: s) {
            cout << char(c + (-'A' + 'a'));
        }
        return 0;
    }
    //cAPS
    if (cnt == s.length() - 1 && (s.front() >= 'a' && s.front() <= 'z')){
        for (char &c: s) {
            if (c >= 'A' && c <= 'Z') {
                c += (-'A'+'a');
            }
        }
        s.front() += (-'a' + 'A');
    }
    cout << s << endl;
    return 0;
}