#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int max_n = max(a, b), min_n = min(a, b), cnt = 0;
    while (min_n != 0) {
        int tmp;
        tmp = min_n;
        cnt += max_n / min_n;
        min_n = max_n % min_n;
        max_n = tmp;
        //cout << min_n << " " << max_n << endl;
    }
    cout << cnt << " " << max_n << endl;
    return 0;
}
