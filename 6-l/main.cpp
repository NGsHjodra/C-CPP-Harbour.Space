#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int max_same = 0;
    for (int i = 0, curr_same; i < n; i++) {
        curr_same = 0;
        for (int j = 0; j < n; j++){
            curr_same += a[j] == b[(j+i+n)%n];
        }

        if (curr_same > max_same) {
            max_same = curr_same;
        }
    }
    cout << n-max_same << endl;
    return 0;
}