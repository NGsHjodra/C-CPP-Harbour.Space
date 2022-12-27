#include <iostream>
#include <vector>

using namespace std;

int main() {
    // row and columns
    int n, m;
    cin >> n >> m;
    vector<string> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int cnt = 0;
    string s = ".*";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == s[(i + j) % 2]) {
                cnt++;
            }
        }
    }
    cout << min(n * m - cnt, cnt) << endl;
    return 0;
}