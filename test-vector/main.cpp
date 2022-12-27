#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> v;
    cout << v.size() << endl;
    cerr << "hi" << endl;
    cout << v.size() << endl;
    for (auto e : v) {
        cout << e << endl;
    }
    cout << v[20] << endl;
    return 0;
}
