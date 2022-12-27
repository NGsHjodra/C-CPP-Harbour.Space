#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> mp;
    string s;
    int cnt = 1;
    while (cin >> s) {
        string tmp;
        for (char c : s) {
            if (c>='A' && c<='Z'){
                tmp += char(c-'A'+'a');
            }else {
                tmp += c;
            }
        }
        if (mp[tmp] != 0){
            cout << mp[tmp] << " ";
        }else {
            cout << cnt << " ";
            mp[tmp] = cnt++;
        }
    }
    return 0;
}
