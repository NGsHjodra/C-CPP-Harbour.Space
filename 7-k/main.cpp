#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    size_t ADs = s.find('@');

    if (ADs >= 17 || ADs == 0 || ADs == string::npos) {
        cout << "NO" << endl;
        return 0;
    }
    string username = s.substr(0, ADs);

    for (const char &c: username) {
        if (isdigit(c) || isalpha(c) || c == '_') {
            continue;
        }
        cout << "NO" << endl;
        return 0;
    }
    size_t Slash = s.find('/');
    string hostname;
    if (Slash == string::npos) {
        if (s.size() - ADs - 1 > 32 || s.size() - ADs - 1 < 1) {
            cout << "NO" << endl;
            return 0;
        }
        hostname = s.substr(ADs + 1, (s.size() - ADs - 1));
    } else {
        if (s.find('/', Slash + 1) != string::npos) {
            cout << "NO" << endl;
            return 0;
        }
        if (Slash - ADs - 1 > 32 || Slash - ADs - 1 < 1) {
            cout << "NO" << endl;
            return 0;
        }
        hostname = s.substr(ADs + 1, (Slash - ADs - 1));

        if (s.size() - Slash - 1 > 16 || s.size() - Slash - 1 < 1) {
            cout << "NO" << endl;
            return 0;
        }
        string resource = s.substr(Slash + 1, (s.size() - Slash - 1));
        for (const char &c: resource) {
            if (isdigit(c) || isalpha(c) || c == '_') {
                continue;
            }
            cout << "NO" << endl;
            return 0;
        }
    }

    if (hostname.front() == '.' || hostname.back() == '.') {
        cout << "NO" << endl;
        return 0;
    }

    int isWord = 1,cntWord = 0;
    for (const char &c: hostname) {
        if (isdigit(c) || isalpha(c) || c == '_') {
            if(isWord) {
                cntWord++;
                if (cntWord > 16) {
                    cout << "NO" << endl;
                    return 0;
                }
            }
            isWord = 1;
            continue;
        }if (c == '.') {
            cntWord = 0;
            isWord = 0;
            continue;
        }
        cout << "NO" << endl;
        return 0;
    }
    int isDot = 0;
    for (const char &c: hostname) {
        if (isDot && c == '.') {
            cout << "NO" << endl;
            return 0;
        }
        if (c == '.') {
            isDot = 1;
        } else {
            isDot = 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}