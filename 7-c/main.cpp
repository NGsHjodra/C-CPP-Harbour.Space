#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        int AmaCnt = 0;
        for (const char &c: s) {
            AmaCnt += c == '@';
        }
        if (s.find('@') == 0 || s.find('@') == s.length() - 1 || s.find('@') == string::npos) {
            continue;
        } else if (AmaCnt != 1) {
            continue;
        } else {
            int noConDot = 0, noConAma = 0;
            for (int j = 0, isDot = 0, isAma = 0; j < s.length(); j++) {
                if (s[j] == '.') {
                    isAma = 0;
                    isDot++;
                    if (isDot == 2) {
                        noConDot = 1;
                        break;
                    }
                } else if (s[j] == '&') {
                    isDot = 0;
                    isAma++;
                    if (isAma == 2) {
                        noConAma = 1;
                        break;
                    }
                } else {
                    isDot = 0;
                    isAma = 0;
                }
            }
            if (noConDot == 0 && noConAma == 0) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}