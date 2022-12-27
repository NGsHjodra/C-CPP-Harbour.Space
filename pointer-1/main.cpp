#include <iostream>
#include <cassert>

using namespace std;

void inc(int *n) {
    // TODO
    cout << *n << " ";
    n++;
    cout << *n;
}

int main() {
    {
        int n = 5;
        inc(&n);
        assert(n == 6);
    }
    {
        int n = 6;
        inc(&n);
        assert(n == 7);
    }
    {
        int n = -4;
        inc(&n);
        assert(n == -3);
    }
    cout << "OK" << endl;
}
