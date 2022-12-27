#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int max_sum = -10005, curr_sum = 0;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (curr_sum + a < max_sum && curr_sum + a < curr_sum && curr_sum + a < 0) {
            curr_sum = 0;
            //max_sum = max(max_sum, a);
        } else {
            if (curr_sum<0){
                curr_sum = a;
            }else{
                curr_sum += a;
                max_sum = max(max_sum, curr_sum);
            }
        }
        max_sum = max(max_sum, a);
        //cout << curr_sum << " " << max_sum << endl;
    }
    cout << max_sum << endl;
    return 0;
}
