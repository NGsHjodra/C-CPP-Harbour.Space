#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    string n_s;
    char lastChar;
    for (const char &c: s) {
        if (c >= 'A' && c <= 'Z') {
            n_s += '_';
            n_s += char(c - 'A' + 'a');
        } else if (lastChar == '_') {
            n_s += char(c - 'a' + 'A');
        } else if (c != '_'){
            n_s += c;
        }
        lastChar = c;
    }
    cout << n_s << endl;
    return 0;
}