#include <iostream>

using namespace std;

int main() {
    int x1,x2,x3;
    cin >> x1 >> x2 >> x3;
    if (abs(x1-x2)<abs(x1-x3)) {
        if ((x1-x2 > 0) == (x1-x3 > 0)){
            cout << max((abs(x1-x2) + abs(x2-x3)), 0) << endl;
            //cout << 1 << endl;
            return 0;
        }
        cout << max((abs(x1-x2) + abs(x2-x3)), 0) << endl;
        //cout << 2 << endl;
        return 0;
    }
    {
        if ((x1-x2 > 0) == (x1-x3 > 0)){
            cout << max((abs(x1-x3) + abs(x3-x2)), 0)<< endl;
            //cout << 3 << endl;
            return 0;
        }
        cout << max((abs(x1-x3) + abs(x3-x2)), 0)<< endl;
        //cout << 4 << endl;
        return 0;
    }
}
