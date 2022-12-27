#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> positive(n);

    for (int i = 0, t; i < n; i++) {
        cin >> t;
        positive[i] = t >= 0;
    }

    int dis = 0;
    vector<int> b(n);
    for (int i = n-1; i >= 0; i--) {
        if (positive[i]){
            dis++;
        }else {
            dis = 0;
        }
        b[i] = dis;
    }

    for (int i = 0; i < n ; i++) {
        cout << b[i] << " ";
    }
    return 0;
}
