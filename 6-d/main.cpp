#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = 0, abs_num; i < n; i++) {
        abs_num = 0;
        for (int j = i - 1; j >= 0; j--) {
            if (a[j] > a[i]) {
                abs_num++;
            }
        }
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                abs_num--;
            }
        }
        if (abs_num == 0) {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}