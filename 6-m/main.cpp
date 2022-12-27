#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> solve(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int curr_skill = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((curr_skill >= a[j]) && solve[j] == 0) {
                solve[j] = 1;
                cnt++;
                curr_skill += ((a[j] + 1) / 2 + 1);
            }
        }
    }
    cout << cnt << endl;
    return 0;
}