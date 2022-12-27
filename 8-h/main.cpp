#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    // row and columns
    int n, m;
    cin >> n >> m;
    vector<string> firstpic(n);
    for (int i = 0; i < n; i++) {
        cin >> firstpic[i];
    }
    //trim
    cerr << "trim\n";
    int top = n, bottom = 0, left = m, right = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (firstpic[i][j] == '*') {
                top = min(top, i);
                bottom = max(bottom, i);
                left = min(left, j);
                right = max(right, j);
            }
        }
    }
    cerr << top << " " << bottom << " " << left << " " << right << endl;
    vector<vector<char>> firstpictrim(bottom - top + 1, vector<char>(right - left + 1));
    for (int i = top; i <= bottom; i++) {
        for (int j = left; j <= right; j++) {
            cerr << firstpic[i][j];
        }
        cerr << endl;
    }
    for (int i = top; i <= bottom; i++) {
        for (int j = left; j <= right; j++) {
            firstpictrim[i - top][j - left] = firstpic[i][j];
        }
    }
    cerr << "yo " << bottom - top + 1 << endl;
    for (int i = 0; i <= bottom - top; i++) {
        for (int j = 0; j <= right - left; j++) {
            cerr << firstpictrim[i][j];
        }
        cerr << endl;
    }
    cerr << "yo" << endl;
    int firstpicH = bottom - top + 1, firstpicW = right - left + 1;

    int n_b, m_b;
    cin >> n_b >> m_b;
    vector<string> secondpic(n_b);
    for (int i = 0; i < n_b; i++) {
        cin >> secondpic[i];
    }
    //trim
    cerr << "trim\n";
    top = n_b, bottom = 0, left = m_b, right = 0;
    for (int i = 0; i < n_b; i++) {
        for (int j = 0; j < m_b; j++) {
            if (secondpic[i][j] == '*') {
                top = min(top, i);
                bottom = max(bottom, i);
                left = min(left, j);
                right = max(right, j);
            }
        }
    }
    cerr << top << " " << bottom << " " << left << " " << right << endl;
    vector<string> secondpictrim(n_b);
    for (int i = top; i <= bottom; i++) {
        for (int j = left; j <= right; j++) {
            secondpictrim[i - top][j - left] = secondpic[i][j];
        }
    }
    for (int i = 0; i <= bottom - top; i++) {
        for (int j = 0; j <= right - left; j++) {
            cerr << secondpictrim[i][j];
        }
        cerr << endl;
    }
    int secondpicH = bottom - top + 1, secondpicW = right - left + 1;
    //compare dimension
    if ((secondpicH != firstpicH && secondpicW != firstpicW) && (secondpicW != firstpicH && secondpicH != firstpicW)) {
        cout << "No" << endl;
        return 0;
    } else if (secondpicH == firstpicH && secondpicW == firstpicW) {
        bool isSame = true;
        for (int i = 0; i <= secondpicH && isSame; i++) {
            for (int j = 0; j <= secondpicW && isSame; j++) {
                if (secondpictrim[i][j] != firstpictrim[i][j]) {
                    isSame = false;
                }
            }
        }
        cerr << "1" << endl;
        if (isSame) {
            cout << "Yes" << endl;
            return 0;
        }
        if (secondpicW != firstpicH && secondpicH != firstpicW) {
            cout << "No" << endl;
            return 0;
        }
        isSame = true;
        for (int i = 0, r_i = m; i <= secondpicH && isSame; i++, r_i--) {
            for (int j = 0, r_j = n; j <= secondpicW && isSame; j++, r_j--) {
                if (secondpictrim[i][j] != firstpictrim[r_i][r_j]) {
                    isSame = false;
                }
            }
        }
        if (isSame) {
            cout << "Yes" << endl;
            return 0;
        }
    } else if (secondpicH == firstpicW && secondpicW == firstpicH) {
        cerr << .2 << endl;
        bool isSame = true;
        for (int i = 0, r_i = 0; i <= secondpicH && isSame; i++, r_i++) {
            for (int j = 0, r_j = n; j <= secondpicW && isSame; j++, r_j--) {
                if (secondpictrim[i][j] != firstpictrim[r_j][r_i]) {
                    isSame = false;
                }
            }
        }
        cerr << 2 << endl;
        if (isSame) {
            cout << "Yes" << endl;
            return 0;
        }
        isSame = true;
        for (int i = 0, r_i = m; i <= secondpicH && isSame; i++, r_i--) {
            for (int j = 0, r_j = 0; j <= secondpicW && isSame; j++, r_j++) {
                if (secondpictrim[i][j] != firstpictrim[r_i][r_j]) {
                    isSame = false;
                }
            }
        }
        if (isSame) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
