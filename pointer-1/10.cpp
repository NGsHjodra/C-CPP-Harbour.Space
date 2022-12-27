#include <iostream>
#include <cassert>

using namespace std;

/*
 The type `char **` is like array of strings, but null-terminated.
 It means that for `char **a` the value of a[length of array a] is nullptr.
*/

/* Example: r=strsplit("_test__me", "_") => r[0]="", r[1]="test", r[2]="", r[3]="me", r[4] = nullptr. */
/* Example: strsplit("test", "_") => ["test"]. */
/* Example: strsplit("_", "_") => ["", ""]. */
char **strsplit(char *s, char sep) {
    // TODO: Return array of string parts after split by character `sep`
}

int main() {
    // TODO: tests
    cout << "OK" << endl;
}
