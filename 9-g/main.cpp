#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    set<int> st;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
        st.insert(num);
    }
    map<int, int> mp;
    int ind = 0;
    for (int e : st) {
        mp[e] = ind;
        ind++;
    }
    for (int e : v){
        cout << mp[e] << " ";
    }
    cout << endl;
    return 0;
}