#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if ((a % 3 == 0) || (a % 10 == 3)) {
            sum += a;
        }
    }
    cout << sum << endl;
    return 0;
}
