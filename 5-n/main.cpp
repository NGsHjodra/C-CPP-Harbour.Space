#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    int seg_len = 1, m_pos;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == m) {
            m_pos = i;
        }
    }

    for (int i = m_pos + 1; i < n; i++) {
        if (v[i] > m) {
            seg_len++;
        } else {
            break;
        }
    }

    for (int i = m_pos - 1; i >= 0; i--) {
        if (v[i] > m) {
            seg_len++;
        } else {
            break;
        }
    }

    cout << seg_len << endl;
    return 0;
}