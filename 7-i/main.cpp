#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int firstPo = n, lastPo = -1;
    int isWord = 0, isDot = 1;
    for (int i = 0; i < s.length() && n>=0; i++) {
        if (s[i] == '.') {
            isDot = 1;
            if (isWord==1) {
                lastPo = i;
            }

        }else {
            if (isDot) {
                n--;
                if (n == 0) {
                    firstPo = i;
                    isWord = 1;
                }
            }
            isDot = 0;
        }
    }

    for (int i = firstPo; i <= lastPo; i++) {
        cout << s[i];
    }
    cout << endl;
    return 0;
}