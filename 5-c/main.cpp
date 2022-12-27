#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    int min_v = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        min_v = min(min_v, v[i]);
    }

    int cnt = 0;
    for (int v_i : v) {
        cnt += (v_i % min_v == 0);
    }

    cout << min_v << " " << cnt << endl;
    return 0;
}
