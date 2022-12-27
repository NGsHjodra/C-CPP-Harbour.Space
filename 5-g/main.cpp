#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    for (int i = 0, j = 0, cnt = 0; (i < n) || (j < m); cnt++) {
        if ((a[i] <= b[j] || j >= m) && i < n) {
            cout << a[i] << " ";
            i++;
        } else {
            cout << b[j] << " ";
            j++;
        }
    }

    cout << endl;
    return 0;
}
