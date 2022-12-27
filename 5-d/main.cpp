#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    int min_dis = n, curr_dis = 0, min_v = 1000000000;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);

        if (a < min_v) {
            min_v = a;
        }
    }
    bool isWalking = false;
    for (int i = 0; i < n; i++) {

        if (v[i] == min_v) {
            if (isWalking) {
                min_dis = min(min_dis, curr_dis);
            }
            isWalking = true;
            curr_dis = 0;
        }

        if (isWalking){
            curr_dis++;
        }
    }

    cout << min_dis << endl;
    return 0;
}
