#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int wrong_place = 0, right_place = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == b[i]) {
            right_place++;
        }else {
            for (int j = 0; j < n; j++) {
                if (a[i] == b[j]) {
                    wrong_place++;
                }
            }
        }
    }
    cout << right_place << " " << wrong_place << endl;
    return 0;
}