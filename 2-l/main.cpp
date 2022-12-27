#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if ((n%10 == 3) != (n%3 == 0)){
        cout << 1 << endl;
        return 0;
    }
    {
        cout << 0 << endl;
        return 0;
    }
}
