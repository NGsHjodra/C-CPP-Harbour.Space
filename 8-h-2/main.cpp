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
    int n_b, m_b;
    cin >> n_b >> m_b;
    vector<string> secondPic(n_b);
    for (int i = 0; i < n_b; i++) {
        cin >> secondPic[i];
    }
    int top_second = n_b, bottom_second = 0, left_second = m_b, right_second = 0;
    for (int i = 0; i < n_b; i++) {
        for (int j = 0; j < m_b; j++) {
            if (secondPic[i][j] == '*') {
                top_second = min(top_second, i);
                bottom_second = max(bottom_second, i);
                left_second = min(left_second, j);
                right_second = max(right_second, j);
            }
        }
    }
    int first_h = bottom_first - top_first, first_w = right_first - left_first, second_h = bottom_second - top_second, second_w = right_second - left_second;
    if ((first_h != second_h && first_w != second_w) && (first_h != second_w && first_w != second_h)) {
        cout << "NO" << endl;
        return 0;
    }
    if (first_w == second_w && first_h == second_h) {
        bool isSame = true;
        for (int i = top_first, r_i = top_second; i <= bottom_first; i++, r_i++) {
            for (int j = left_first, r_j = left_second; j <= right_first; j++, r_j++) {
                if (firstpic[i][j] != secondPic[r_i][r_j]) {
                    isSame = false;
                }
            }
        }
        if (isSame) {
            cout << "YES" << endl;
            return 0;
        }
        isSame = true;
        for (int i = top_first, r_i = bottom_second; i <= bottom_first; i++, r_i--) {
            for (int j = left_first, r_j = right_second; j <= right_first; j++, r_j--) {
                if (firstpic[i][j] != secondPic[r_i][r_j]) {
                    isSame = false;
                }
            }
        }
        if (isSame) {
            cout << "YES" << endl;
            return 0;
        }
    }
    if (first_w == second_h && first_h == second_w) {
        bool isSame = true;
        for (int i = top_first, r_i = right_second; i <= bottom_first; i++, r_i--) {
            for (int j = left_first, r_j = top_second; j <= right_first; j++, r_j++) {
                if (firstpic[i][j] != secondPic[r_j][r_i]) {
                    isSame = false;
                }
            }
        }
        if (isSame) {
            cout << "YES" << endl;
            return 0;
        }
        isSame = true;
        for (int i = top_first, r_i = left_second; i <= bottom_first; i++, r_i++) {
            for (int j = left_first, r_j = bottom_second; j <= right_first; j++, r_j--) {
                if (firstpic[i][j] != secondPic[r_j][r_i]) {
                    isSame = false;
                }
            }
        }
        if (isSame) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
