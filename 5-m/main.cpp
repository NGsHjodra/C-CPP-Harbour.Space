#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sum += (2 * v[0] + 2);

    if (n == 1) {
        cout << sum << endl;
        return 0;
    }

    sum -= min(v[0], v[1]);


    for (int i = 1; i < n - 1; i++) {
        sum += (2 * v[i] + 2) - min(v[i - 1], v[i]) - min(v[i + 1], v[i]);
    }

    sum += (2 * v[n - 1] + 2) - min(v[n - 1], v[n - 2]);
    cout << sum << endl;
    return 0;
}