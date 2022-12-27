#include <iostream>

using namespace std;

int main() {
    int a0,a1,a2,a3;
    cin >> a0 >> a1 >> a2 >> a3;
    // ~8 ~8 ~8 ~8
    if ((a0 <= a1) && (a1 <= a2) && (a2 <= a3)){
        cout << 0 << endl;
        return 0;
    }
    //  9 ~8 ~8 ~7
    if ((a0 > a1) && (a1 == a2) && (a2 >= a3)){
        cout << 1 << endl;
        return 0;
    }
    // ~9 ~8 ~8  7
    if ((a0 >= a1) && (a1 == a2) && (a2 > a3)){
        cout << 1 << endl;
        return 0;
    }
    // a3  a2  a1  a0
    if ((a0 > a1) && (a1 <= a2) && (a2  a3)){
        cout << 1 << endl;
        return 0;
    }
}
