#include <iostream>
#include <cassert>

using namespace std;

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    {
        int a = 5;
        int b = 3;
        swap(&a, &b);
        assert(a == 3 && b == 5);
    }
    {
        int a = -15;
        int b = 13;
        swap(&a, &b);
        assert(a == 13 && b == -15);
    }
    cout << "OK" << endl;
}
