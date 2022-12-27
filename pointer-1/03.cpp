#include <iostream>
#include <cassert>

using namespace std;

void div_mod(int n, int m, int *div, int *mod) {
    *div = n / m;
    *mod = n % m;
}

int main() {
    {
        int n = 5;
        int m = 3;
        int div, mod;
        div_mod(n, m, &div, &mod);
        assert(div == 1 && mod == 2);
    }
    {
        int n = 10;
        int m = 2;
        int div, mod;
        div_mod(n, m, &div, &mod);
        assert(div == 5 && mod == 0);
    }
    cout << "OK" << endl;
}
