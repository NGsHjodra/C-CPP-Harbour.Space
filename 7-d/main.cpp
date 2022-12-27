#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.back() != '9') {
        s.back()++;
        cout << s << endl;
        return 0;
    }
    int sBack = int(s.length()) - 1;
    while (sBack >= 0) {
        if (s[sBack] != '9') {
            s[sBack]++;
            cout << s << endl;
            return 0;
        }

        s[sBack] = '0';
        if (sBack == 0) {
            s = '1' + s;
        }
        sBack--;
    }
    cout << s << endl;
    return 0;
}