#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    if (s.length() % 2 == 1) {
        cout << "No" << endl;
        return 0;
    }
    if (s.substr(0,s.length()/2) == s.substr(s.length()/2)) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}