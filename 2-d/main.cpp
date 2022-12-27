#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    if (x>=78) {
        cout << 5 << endl;
        return 0;
    }
    if (x>=53) {
        cout << 4 << endl;
        return 0;
    }
    if (x>=29) {
        cout << 3 << endl;
        return 0;
    }
    //maybe add something like this to last task also for clarification
    if (x>=0) {
        cout << 2 << endl;
        return 0;
    }
}
