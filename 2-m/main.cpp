#include <iostream>

using namespace std;

int main() {
    int n,a,b;
    cin >> n >> a >> b;
    if (b<a){
        cout << 1 << endl;
        return 0;
    }
    {
        cout << (n+a-1)/a << endl;
        return 0;
    }
}
