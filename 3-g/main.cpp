#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1, prod_sum = 0, multiply = 1; i <= n; i++) {
        prod_sum += i;
        sum += (prod_sum * prod_sum) * multiply;
        multiply *= -1;
    }
    cout << sum << endl;
    return 0;
}
