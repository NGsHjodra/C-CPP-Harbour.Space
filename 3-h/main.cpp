#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int day = 0;
    for (int i = 1; i * i <= n; n -= i * i, i++) {
        day++;
    }
    cout << day << endl;
    return 0;
}
