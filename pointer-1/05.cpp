#include <iostream>
#include <cassert>

using namespace std;

bool is_palindrome(const char *s) {
    string tmp = s;
    int s_len = int(tmp.length());
    for (int i = 0, mid = s_len / 2; i < mid; i++) {
        if (tmp[i] != tmp[i + mid + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    {
        const char *s = "tut";
        assert(is_palindrome(s));
    }
    {
        assert(is_palindrome(""));
    }
    {
        assert(is_palindrome("a") == 1);
    }
    {
        assert(!is_palindrome("ab"));
    }
    {
        assert(is_palindrome("000000000000000000000"));
    }
    {
        assert(!is_palindrome("0000000000100000000000"));
    }
    cout << "OK" << endl;
}
