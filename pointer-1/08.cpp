#include <iostream>
#include <cassert>

using namespace std;

void sort(int *a, int size) {
    // TODO
}

int main() {
    {
        int a[5] = {3, 1, 4, 2, 5};
        sort(a, 5);
        assert(a[0] == 1 && a[1] == 2 && a[2] == 3 && a[3] == 4 && a[4] == 5);
    }
    {
        int *a = 0;
        sort(a, 0);
        assert(a == 0);
    }
    {
        int a[4] = {113, 1, 4, 2};
        sort(a, 4);
        assert(a[0] == 1 && a[1] == 2 && a[2] == 4 && a[3] == 113);
    }
    {
        int a[4] = {40, 3, 2, 1};
        sort(a, 4);
        assert(a[0] == 1 && a[1] == 2 && a[2] == 3 && a[3] == 40);
    }
    {
        int a[4] = {3, 40, 2, 1};
        sort(a, 4);
        assert(a[0] == 1 && a[1] == 2 && a[2] == 3 && a[3] == 40);
    }
    {
        int a[4] = {40, 2, 3, 1};
        sort(a, 4);
        assert(a[0] == 1 && a[1] == 2 && a[2] == 3 && a[3] == 40);
    }
    {
        int a[4] = {40, 1, 2, 3};
        sort(a, 4);
        assert(a[0] == 1 && a[1] == 2 && a[2] == 3 && a[3] == 40);
    }
    {
        int a[1] = {2147483647};
        sort(a, 1);
        assert(a[0] == 2147483647);
    }
    cout << "OK" << endl;
}
