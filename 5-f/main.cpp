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

    int prev_num = v[0], cnt = 0;
    vector<int> v_cnt,v_num;
    for (int v_i: v) {

        if (v_i != prev_num) {
            v_cnt.push_back(cnt);
            v_num.push_back(prev_num);
            cnt = 0;
        }
        cnt++;
        prev_num = v_i;
    }
    v_cnt.push_back(cnt);
    v_num.push_back(prev_num);

    for (int i = 0, size_v_cnt = v_cnt.size(); i < size_v_cnt; i++){
        cout << v_cnt[i] << " " << v_num[i] << " ";
    }

    cout << endl;
    return 0;
}
