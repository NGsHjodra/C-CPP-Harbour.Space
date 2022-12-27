#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int max_num = 0, max_div = 0;
    for (int i = a, curr_div; i <= b; i++) {
        curr_div = 0;
        for (int d = 1; d <= i; d++) {
            if (i % d == 0) {
                curr_div++;
            }
        }
        if (curr_div >= max_div) {
            max_div = curr_div;
            max_num = i;
        }
    }
    cout << max_num << endl;
    return 0;
}