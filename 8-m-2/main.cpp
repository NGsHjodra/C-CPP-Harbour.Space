#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    vector<string> firstpic(n);
    for (int i = 0; i < n; i++) {
        cin >> firstpic[i];
    }
    vector<int> v(4005);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int cnt = 0;
            if (firstpic[i][j] == '*'){
                cnt++;
                for (int k = i-1; k >= 0; k--) {
                    if (firstpic[k][j] == '.')
                        break;
                    cnt++;
                }
                for (int k = i+1; k < n; k++) {
                    if (firstpic[k][j] == '.')
                        break;
                    cnt++;
                }
                for (int k = j-1; k >= 0; k--) {
                    if (firstpic[i][k] == '.')
                        break;
                    cnt++;
                }
                for (int k = j+1; k < m; k++) {
                    if (firstpic[i][k] == '.')
                        break;
                    cnt++;
                }
            }
            v[cnt]++;
            ans = max(ans, cnt);
        }
    }
    cout << ans << " " << v[ans] << endl;
    return 0;
}
