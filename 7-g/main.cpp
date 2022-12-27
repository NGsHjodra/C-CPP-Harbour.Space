#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> v(10);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') {
            v[2]++;
            continue;
        }
        i++;
        if (s[i] == '1') {
            v[5]++;
            continue;
        }
        i++;
        if (s[i] == '0') {
            v[3]++;
            continue;
        }
        v[4]++;
    }
    int mostNum = 0, most = 0;
    for (int i = 0; i < 6;i++) {
        if (v[i] > most) {
            most = v[i];
            mostNum = i;
        }
    }
    cout << mostNum << endl;
    return 0;
}