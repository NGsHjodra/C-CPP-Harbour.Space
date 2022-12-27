#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int prod = 1;
    for (; a <= b; a++) {
        prod *= a;
    }
    cout << prod << endl;
    return 0;
}
