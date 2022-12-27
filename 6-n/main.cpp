#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> solve(n);
    vector<int> orders;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    while (orders.size() < n) {
        int last_task = INT_MAX, first_min = -1;
        for (int i = 0; i < n; i++) {
            if ((a[i] < last_task) && (solve[i] == 0)) {
                last_task = a[i];
                first_min = i;
            }
        }

        orders.push_back(last_task);
        solve[first_min] = 1;


        for (int i = first_min; i < n; i++) {
            if ((a[i] > last_task) && (solve[i] == 0)) {
                last_task = a[i];
                orders.push_back(last_task);
                solve[i] = 1;
            }
        }
    }
    for (int e: orders) {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}