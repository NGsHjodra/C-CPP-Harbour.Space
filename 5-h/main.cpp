#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    int cnt_1 = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i]) {
            cnt_1++;
        }
    }

    // if 0 means swap
    int ans = 0;
    for (int i = n - 1; i > n - 1 - cnt_1; i--) {
        if (v[i] == 0) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
