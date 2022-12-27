#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1, added = 0; i <= n; i++) {
        added += i;
        sum += added;
        cout << sum << " ";
    }
    cout << endl;
    return 0;
}
