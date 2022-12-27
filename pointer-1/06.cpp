#include <iostream>
#include <cassert>

using namespace std;

char *strdup(const char *s) {
    // TODO: use function `malloc` here
}

int main() {
    {
        const char *s = "tu";
        char *t = strdup(s);
        assert(t[0] == 't' && t[1] == 'u' && t[2] == 0);
        t[0] = 'x';
        t[1] = 'y';
        t[2] = 'z';
        assert(s[0] == 't' && s[1] == 'u' && s[2] == 0);
        delete t;
    }
    {
        const char *s = "";
        char *t = strdup(s);
        assert(t[0] == 0);
        t[0] = 'x';
        assert(s[0] == 0);
        delete t;
    }
    {
        const char *s = "code";
        char *t = strdup(s);
        assert(t[0] == 'c' && t[1] == 'o' && t[2] == 'd' && t[3] == 'e' && t[4] == 0);
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
