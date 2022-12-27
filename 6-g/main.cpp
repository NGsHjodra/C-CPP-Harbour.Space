#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0, t; i < n; i++) {
        cin >> t;
        a[t] = i;
    }
    int cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        cnt += abs(a[i] - a[i + 1]);
    }
    cout << cnt << endl;
    return 0;
}