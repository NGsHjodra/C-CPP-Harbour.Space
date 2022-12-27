#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> inv(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        inv[a[i]] = i;
    }
    for (int i = 0,curr_cnt; i < n; i++) {
        curr_cnt = 0;
        for (int j = inv[i]; j >= 0; j--) {
            if (a[j] > i) {
                curr_cnt++;
            }
        }
        cout << curr_cnt << " ";
    }
    cout << endl;
    return 0;
}