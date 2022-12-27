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
    vector<int> vi(m);
    int minR = n;
    for (int j = 0; j < m; j++) {
        int stars = 0;
        for (int i = 0; i < n; i++) {
            stars += v[i][j] == '*';
        }
        vi[j] = stars;
        minR = min(minR, stars);
    }
    for (int &i : vi) {
        i -= minR;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i >= n-vi[j]) {
                cout << '*';
            }else {
                cout << '.';
            }
        }cout << endl;
    }
    return 0;
}
