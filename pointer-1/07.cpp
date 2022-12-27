#include <iostream>
#include <cassert>

using namespace std;

char *reverse(const char *s) {
    // TODO
}

int main() {
    {
        const char *s = "tu";
        char *t = reverse(s);
        assert(t[0] == 'u' && t[1] == 't' && t[2] == 0);
        t[0] = 'x';
        t[1] = 'y';
        t[2] = 'z';
        assert(s[0] == 't' && s[1] == 'u' && s[2] == 0);
        delete t;
    }
    {
        const char *s = "";
        char *t = reverse(s);
        assert(t[0] == 0);
        t[0] = 'x';
        assert(s[0] == 0);
        delete t;
    }
    {
        const char *s = "code";
        char *t = reverse(s);
        assert(t[0] == 'e' && t[1] == 'd' && t[2] == 'o' && t[3] == 'c' && t[4] == 0);
        t[0] = 'x';
        t[1] = 'y';
        t[2] = 'z';
        t[3] = '1';
        t[4] = '2';
        assert(s[0] == 'c' && s[1] == 'o' && s[2] == 'd' && s[3] == 'e' && s[4] == 0);
        delete t;
    }
    cout << "OK" << endl;
}
