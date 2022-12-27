#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> mp;
    map<string, int> amount;
    for (int i = 0; i < n; i++) {
        string NAME;
        int GRADE;
        cin >> NAME >> GRADE;
        mp[NAME] += GRADE;
        amount[NAME]++;
    }
    for (auto e : mp){
        cout << e.first << " " << e.second/amount[e.first] << endl;
    }
    return 0;
}