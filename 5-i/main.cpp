#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    int max_pos, max_v = -INT_MAX, min_pos, min_v = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> v[i];

        if (v[i] >= max_v) {
            max_v = v[i];
            max_pos = i;
        }

        if (v[i] < min_v) {
            min_v = v[i];
            min_pos = i;
        }
    }
    int tmp_min = min_pos;
    min_pos = min(min_pos,max_pos);
    max_pos = max(tmp_min,max_pos);
    for (int i = 0; i < min_pos; i++) {
        cout << v[i] << " ";
    }
    for (int i = max_pos; i >= min_pos; i--) {
        cout << v[i] << " ";
    }
    for (int i = max_pos+1; i < n; i++) {
        cout << v[i] << " ";
    }

    cout << endl;
    return 0;
}
