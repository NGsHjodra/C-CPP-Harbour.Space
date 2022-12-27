#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    size_t OopsPos = s.find("oops");
    while (OopsPos != string::npos) {
        s.erase(OopsPos, 4);
        OopsPos = s.find("oops");
    }
    cout << s << endl;
    return 0;
}