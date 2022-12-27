#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0, curr_min = 10000; i < n; i++) {
        int a;
        cin >> a;
        if (a < curr_min) {
            cnt = 1;
            curr_min = a;
        } else if (a == curr_min) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
