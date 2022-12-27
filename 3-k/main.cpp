#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    int multiply = 1;
    while (n > 0) {
        sum += (n % 10) * multiply;
        n /= 10;
        multiply *= -1;
    }
    if (sum == 0) {
        cout << 1 << endl;
        return 0;
    }
    cout << 0 << endl;
    return 0;
}
