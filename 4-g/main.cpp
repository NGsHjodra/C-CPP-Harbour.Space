#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int max_rest = 0, curr_rest = 0;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (a==0){
            curr_rest = 0;
        }else{
            curr_rest++;
            max_rest = max(max_rest, curr_rest);
        }
    }
    cout << max_rest << endl;
    return 0;
}
