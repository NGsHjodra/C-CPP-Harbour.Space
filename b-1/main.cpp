#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    int back = a / 100000;
    int mid = back % 1000;
    cout << mid;
    return 0;
}
