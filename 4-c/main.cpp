#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }

    int first_min_pos, last_max_pos, curr_min = 1000000000, curr_max = -1000000000;

    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (a > curr_max) {
            curr_max = a;
            last_max_pos = i;
        }
        if (a == curr_max) {
            last_max_pos = i;
        }
        if (a < curr_min) {
            first_min_pos = i;
            curr_min = a;
        }
    }

    cout << abs(first_min_pos - last_max_pos) << endl;
    return 0;
}
