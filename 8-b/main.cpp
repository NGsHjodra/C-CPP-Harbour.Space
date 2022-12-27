#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    // row and columns
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int minRow = m;
    vector<vector<int>> vvi(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        int row = 0;
        for (int j = 0; j < m; j++) {
            row += v[i][j] == '.';
        }
        minRow = min(row, minRow);
    }
    for (int i = 0; i < n; i++) {
        int row = 0;
        for (int j = 0; j < m; j++) {
            row += v[i][j] == '.';
        }
        if (row == minRow) {
            for (int j = 0; j < m; j++) {
                vvi[i][j] += v[i][j] == '.';
            }
        }
    }
    int minCol = n;
    for (int j = 0; j < m; j++) {
        int col = 0;
        for (int i = 0; i < n; i++) {
            col += v[i][j] == '.';
        }
        minCol = min(col, minCol);
    }

    for (int j = 0; j < m; j++) {
        int col = 0;
        for (int i = 0; i < n; i++) {
            col += v[i][j] == '.';
        }
        if (col == minCol) {
            for (int i = 0; i < n; i++) {
                vvi[i][j] += v[i][j] == '.';
            }
        }
    }
    for (auto &vi: vvi) {
        for (auto i: vi) {
            if (i == 2) {
                cout << minRow + minCol - 1 << endl;
                return 0;
            }
        }
    }
    cout << minRow + minCol << endl;
    return 0;
}
