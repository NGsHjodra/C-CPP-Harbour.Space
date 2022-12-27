#include <iostream>
#include <cassert>

using namespace std;

int strlen(const char *s) {
    int cnt = 0;
    while (s[cnt] != '\0') {
        cnt++;
    }
    return cnt;
}

int main() {
    {
        const char *s = "test";
        assert(strlen(s) == 4);
    }
    {
        assert(strlen("") == 0);
    }
    {
        assert(strlen("a") == 1);
    }
    {
        assert(strlen("zxcvbnm,./") == 10);
    }
    {
        assert(strlen("000000000000000000000") == 21);
    }
    cout << "OK" << endl;
}
