#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x1,x2,x3,x4;
    cin >> x1 >> x2 >> x3 >> x4;
    int f1 = min(x1, x2), e1 = max(x1, x2),f2 = min(x3, x4), e2 = max(x3, x4);
    cout << (e1-f1+1 + e2-f2+1) - max((min(e1, e2)-max(f1, f2)+1),0) << endl;
}

// -10 -2 -3 -4