#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 1; i < n; i += 2) {
        cout << v[i] << " ";
    }
    for (int i = 0; i < n; i += 2) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
