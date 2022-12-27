#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max_num = 1000000000, max_occur = 0;

    for (int i = 0, curr_occur; i < n; i++) {
        curr_occur = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[j] == a[i]) {
                curr_occur++;
            }
        }
        if (curr_occur > max_occur) {
            max_occur = curr_occur;
            max_num = a[i];
        } else if (curr_occur == max_occur) {
            max_num = min(max_num, a[i]);
        }
    }
    cout << max_num << " " << max_occur << endl;
    return 0;
}