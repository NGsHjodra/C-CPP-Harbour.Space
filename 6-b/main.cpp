#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    for (int x = 1, n_cd; x <= n; x++) {
        n_cd = 0;
        for (int d = 1; d <= x; d++) {
            if ((n % d == 0) && (x % d == 0)) {
                n_cd++;
            }
        }
        if (k == n_cd) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}