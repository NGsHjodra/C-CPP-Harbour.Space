#include <iostream>
#include <vector>

using namespace std;

int main() {
    // row and columns
    int n,m;
    cin >> n >> m;
    vector<string> v(n);

    for (int i  = 0; i < n; i++) {
        cin >> v[i];
    }
    int cnt = 0;
    for (int i  = 0; i < n; i++) {
        bool row = true;
        for (int j = 0; j < m; j++) {
            if (v[i][j] == '.') {
                row = false;
                break;
            }
        }
        if (row)
            cnt++;
    }
    for (int i  = 0; i < m; i++) {
        bool col = true;
        for (int j = 0; j < n; j++) {
            if (v[j][i] == '.') {
                col = false;
                break;
            }
        }
        if (col)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
