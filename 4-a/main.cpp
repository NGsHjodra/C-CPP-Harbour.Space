#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << "not prime" << endl;
        return 0;
    }
    if (n == 2) {
        cout << "prime" << endl;
        return 0;
    }
    if (n % 2 == 0) {
        cout << "not prime" << endl;
        return 0;
    }
    for (int i = 3; i < n; i += 2) {
        if (n % i == 0) {
            cout << "not prime" << endl;
            return 0;
        }
    }
    cout << "prime" << endl;
    return 0;
}
