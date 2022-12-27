#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if ((a==b) && (b==c)){
        cout << 0 << endl;
        return 0;
    }
    if ((a==b) || (b==c) || (a==c)){
        cout << 1 << endl;
        return 0;
    }
    // if no same number
    cout << 2 << endl;
    return 0;
}
