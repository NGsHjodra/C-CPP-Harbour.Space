#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    multiset<int> mst;
    for (int i = 0; i < n; i++){
        int q;
        cin >> q;
        if (q == 1) {
            int num;
            cin >> num;
            mst.insert(num);
        }
        // q == 2
        else {
            cout << *mst.begin() << endl;
            mst.erase(mst.begin());
        }
    }
    return 0;
}
