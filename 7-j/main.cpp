#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<string> n_s;

    char lastChar = '_';
    string tmp;
    for (char c : s) {
        if (c == ',') {
            if (!tmp.empty()) {
                while (tmp.back() == '_') {
                    tmp.pop_back();
                }
                n_s.push_back(tmp);
                tmp = "";
            }
        } else if (c == '_') {
            if (lastChar != '_' && lastChar != ',')
                tmp += "_";
        } else {
            tmp += c;
        }
        lastChar = c;
    }
    if (!tmp.empty()) {
        while (tmp.back() == '_') {
            tmp.pop_back();
        }
        n_s.push_back(tmp);
    }
    cout << n_s.size() << endl;
    for (const string &e : n_s)
        cout << e << endl;
    return 0;
}