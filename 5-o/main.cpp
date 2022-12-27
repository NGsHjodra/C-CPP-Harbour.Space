#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 200000) {
        return 0;
    }
    vector<int> iszero(n);
    int leftzero = n, rightzero = -1;
    for (int i = 0, t; i < n; i++) {
        cin >> t;

        if (t == 0) {
            iszero[i] = 1;
            leftzero = min(leftzero, i);
            rightzero = max(rightzero, i);
        }
    }

    int dis = 0;
    vector<int> near_left(n, INT_MAX);
    for (int i = rightzero; i >= 0; i--) {
        if (iszero[i]) {
            dis = 0;
        } else {
            dis++;
        }
        near_left[i] = dis;
    }

    dis = 0;
    vector<int> near_right(n, INT_MAX);
    for (int i = leftzero; i < n; i++) {
        if (iszero[i]) {
            dis = 0;
        } else {
            dis++;
        }
        near_right[i] = dis;
    }

    for (int i = 0; i < n; i++) {
        cout << min(near_left[i], near_right[i]) << " ";
    }
    cout << endl;
    return 0;
}