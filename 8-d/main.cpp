#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    // row and columns
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        int cross = 0,zero = 0;
        bool conSecCross = false, conSecZero = false;
        for (int j = 0; j < m; j++) {
            if (v[i][j] == 'X') {
                if (!conSecCross)
                    cross = 0;
                conSecZero = false;
                conSecCross = true;
                cross++;
            }else if (v[i][j] == 'O') {
                if (!conSecZero)
                    zero = 0;
                conSecCross = false;
                conSecZero = true;
                zero++;
            }else {
                conSecCross = false;
                conSecZero = false;
            }
        }
        if (zero >= 5 || cross >= 5) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    for (int j = 0; j < m; j++) {
        int cross = 0,zero = 0;
        bool conSecCross = false, conSecZero = false;
        for (int i = 0; i < n; i++) {
            if (v[i][j] == 'X') {
                if (!conSecCross)
                    cross = 0;
                conSecZero = false;
                conSecCross = true;
                cross++;
            }else if (v[i][j] == 'O') {
                if (!conSecZero)
                    zero = 0;
                conSecCross = false;
                conSecZero = true;
                zero++;
            }else {
                conSecCross = false;
                conSecZero = false;
            }
        }

        if (zero >= 5 || cross >= 5) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        int cross = 0,zero = 0;
        bool conSecCross = false, conSecZero = false;
        for (int j = 0; j < m; j++) {
            if (v[(i+j) % n][j] == 'X') {
                if (!conSecCross)
                    cross = 0;
                conSecZero = false;
                conSecCross = true;
                cross++;
            }else if (v[(i+j) % n][j] == 'O') {
                if (!conSecZero)
                    zero = 0;
                conSecCross = false;
                conSecZero = true;
                zero++;
            }else {
                conSecCross = false;
                conSecZero = false;
            }
        }
        if (zero >= 5 || cross >= 5) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        int cross = 0,zero = 0;
        bool conSecCross = false, conSecZero = false;
        for (int j = 0; j < m; j++) {
            if (v[(i+j) % n][m - j - 1] == 'X') {
                if (!conSecCross)
                    cross = 0;
                conSecZero = false;
                conSecCross = true;
                cross++;
            }else if (v[(i+j) % n][m - j - 1] == 'O') {
                if (!conSecZero)
                    zero = 0;
                conSecCross = false;
                conSecZero = true;
                zero++;
            }else {
                conSecCross = false;
                conSecZero = false;
            }
        }
        if (zero >= 5 || cross >= 5) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
