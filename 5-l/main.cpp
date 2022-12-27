#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, p, q;
    cin >> n >> p >> q;

    vector<int> v(n);
    vector<int> IndexFirstShift(n);
    vector<int> IndexSecondShift(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        IndexFirstShift[(i - q + n) % n] = i;
    }

    for (int i = 0; i < n / 2; i++) {
        IndexSecondShift[(i - p + n / 2) % (n / 2)] = IndexFirstShift[i];
    }

    for (int i = n / 2; i < n; i++) {
        IndexSecondShift[(i - p + n / 2) % (n / 2) + (n / 2)] = IndexFirstShift[i];
    }

    for (int i = 0; i < n; i++) {
        cout << v[IndexSecondShift[i]] << " ";
    }
    cout << endl;
    return 0;
}