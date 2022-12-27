#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> mp;
    string s;
    while (cin >> s) {
        string tmp;
        for (char c : s) {
            if (c>='A' && c<='Z'){
                tmp += char(c-'A'+'a');
            }else {
                tmp += c;
            }
        }
        mp[tmp]++;
    }

    int maxOccur = 0;
    for (const auto& e : mp){
        maxOccur = max(maxOccur, e.second);
    }
    for (const auto& e : mp){
        if (e.second == maxOccur)
            cout << e.first << endl;
    }
    return 0;
}
