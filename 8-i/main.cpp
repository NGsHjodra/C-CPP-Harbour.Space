#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    vector<string> firstpic(n);
    for (int i = 0; i < n; i++) {
        cin >> firstpic[i];
    }
    int top_first = n, bottom_first = 0, left_first = m, right_first = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (firstpic[i][j] == '*') {
                top_first = min(top_first, i);
                bottom_first = max(bottom_first, i);
                left_first = min(left_first, j);
                right_first = max(right_first, j);
            }
        }
    }
    cout << max(bottom_first - top_first + 1, right_first - left_first + 1) << endl;
    return 0;
}
