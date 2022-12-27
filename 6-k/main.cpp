#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0, curr_max, curr_max_po; i < n; i++) {
        curr_max = -1, curr_max_po = 0;
        for (int j = 0; j < n-i; j++) {
            if (a[j] > curr_max){
                curr_max = a[j];
                curr_max_po = j;
            }
        }

        int tmp = a[n-i-1];
        a[n-i-1] = curr_max;
        a[curr_max_po] = tmp;

        cout << curr_max_po << " ";
    }
    cout << endl;
    return 0;
}