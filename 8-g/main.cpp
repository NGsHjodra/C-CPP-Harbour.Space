#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    // row and columns
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> vvi(n, vector<int>(m));
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        vvi[x][y] = 1;
    }
    vector<vector<int>> rough(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (vvi[i][j] == 1) {
                for (int k_i = max(i - 1, 0); k_i < min(i + 2, n); k_i++) {
                    for (int l = max(j - 1, 0); l < min(j + 2, m); l++) {
                        rough[k_i][l]++;
                    }
                }
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (rough[i][j] > 0 && vvi[i][j] == 0) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
