#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int prev_num = 0, cnt = 0;
    vector<int> v_cnt;
    for (int v_i: v) {

        if (v_i <= prev_num) {
            v_cnt.push_back(cnt);
            cnt = 0;
        }
        cnt++;
        prev_num = v_i;
    }
    v_cnt.push_back(cnt);

    cout << v_cnt.size() << endl;
    for (int v_cnt_i: v_cnt) {
        cout << v_cnt_i << " ";
    }

    cout << endl;
    return 0;
}
