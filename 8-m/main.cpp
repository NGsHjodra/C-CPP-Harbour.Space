#include <iostream>
#include <algorithm>

using namespace std;

const int N = 4005;

char a[N][N];
int beauty[N][N];
int n, m;

int maxSubArraySum(string s) {
    int size = s.size();
    int a[size];
    for (int i = 0; i < size; i++) {
        a[i] = s[i] - '0';
    }
    int max_so_far = a[0];
    int max_ending_here = a[0];

    for (int i = 1; i < size; i++) {
        max_ending_here = max(a[i], max_ending_here + a[i]);
        max_so_far = max(max_so_far, max_ending_here);
    }

    return max_so_far;
}


int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int ans = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '*') {
                int row_beauty = maxSubArraySum(a[i]);
                beauty[i][j] = row_beauty;
                if (row_beauty > ans) {
                    ans = row_beauty;
                    cnt = 1;
                } else if (row_beauty == ans) {
                    cnt++;
                }
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[j][i] == '*') {
                int col_beauty = maxSubArraySum(a[j]);
                beauty[j][i] = col_beauty;
                if (col_beauty > ans) {
                    ans = col_beauty;
                    cnt = 1;
                } else if (col_beauty == ans) {
                    cnt++;
                }
            }
        }
    }

    cout << ans << " " << cnt << endl;
    return 0;
}
