#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double x, p, z;
    cin >> x >> p >> z;
    cout << setprecision(6) << fixed;
    //to percent
    p /= 100;
    p += 1;

    double payment = 0;
    while (x > 0) {
        x *= p;
        payment += min(x, z);
        x -= z;
    }
    cout << payment << endl;
    return 0;
}
