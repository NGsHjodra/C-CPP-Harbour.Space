#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(10, 0);
    int max_v = 0, max_i = 0;
    for (int i = 0, t; i < n; i++) {
        cin >> t;
        v[t]++;
        if (v[t] > max_v){
            max_v = v[t];
            max_i = t;
        }
    }
    cout << max_i << endl;
    return 0;
}
