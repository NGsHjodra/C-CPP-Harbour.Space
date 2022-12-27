#include <iostream>
#include <map>

using namespace std;

int main() {
    int k;
    cin >> k;
    map<string, int> mp;
    for (int i = 0; i < k; i++) {
        string NAME1, NAME2;
        int AMOUNT;
        cin >> NAME1 >> NAME2 >> AMOUNT;
        mp[NAME1] -= AMOUNT;
        mp[NAME2] += AMOUNT;
    }
    for (auto e : mp){
        cout << e.first << " " << e.second << endl;
    }
    return 0;
}
