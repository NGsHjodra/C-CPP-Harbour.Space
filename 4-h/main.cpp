#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int first_min = 1000000000, sec_min = 1000000000;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (a < first_min) {
            sec_min = first_min;
            first_min = a;
        } else if (a < sec_min) {
            sec_min = a;
        }
    }
    cout << first_min + sec_min << endl;
    return 0;
}
