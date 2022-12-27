#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, set<int>> mp;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++) {
            int number;
            cin >> number;
            mp[number].insert(i+1);
        }
    }
    for(const auto& e : mp){
        cout << e.first << " ";
        for (auto e_v : e.second){
            cout << e_v << " ";
        }
        cout << endl;
    }

    return 0;
}