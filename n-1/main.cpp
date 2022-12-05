#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x,y;
    cin >> x >> y;
    int mx = max(x,y), mn = min(x,y);
    int ans_mn = min(7-(mx-mn) , mx-mn);
    int ans_mx = max(7-(mx-mn) , mx-mn);
    cout << ans_mn << " " << ans_mx << endl;
}