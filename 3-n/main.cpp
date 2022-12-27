#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 100; i <= 999; i++) {
        int curr_i = i;

        int sum_last_3 = 0;
        sum_last_3 += curr_i % 10;
        curr_i /= 10;
        sum_last_3 += curr_i % 10;
        curr_i /= 10;
        sum_last_3 += curr_i % 10;
        
        if (sum_last_3 % n == 0) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
