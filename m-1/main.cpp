#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int m;
    cin >> m;
    // m = n(n-1)/2
    // 2m = n(n-1)
    // 2m = n*n - n
    int n = sqrt(2*m)+1;
    cout << n << endl;
}