#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int pos, curr_lowest = 10000;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (a < curr_lowest) {
            curr_lowest = a;
            pos = i;
        }
    }
    cout << pos << endl;
    return 0;
}
