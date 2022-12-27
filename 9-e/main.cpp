#include <iostream>
#include <map>

using namespace std;

int main() {
    string s;
    cin >> s;
    map<string, int> mp;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        for (int j = 1; i + j <= s.size(); j++) {
            string tmp = s.substr(i, j);
            if (mp[tmp] == 0) {
                cnt++;
                mp[tmp]++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
