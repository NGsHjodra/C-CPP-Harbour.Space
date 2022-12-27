#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long

using namespace std;

map<ll, ll> mp;

int main() {
    ll a, x, y, m;
    cin >> a >> x >> y >> m;
    ll cnt = 1;
    while (mp[a] == 0) {
        mp[a] = cnt++;
        a = (x * a + y) % m;

    }
    cout << cnt - mp[a] << " " << mp[a] - 1 << endl;
    return 0;
}
