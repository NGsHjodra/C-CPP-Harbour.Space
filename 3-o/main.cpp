#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 100000; i <= 999999; i++){
        int curr_i = i;

        int sum_last_3 = 0;
        sum_last_3 += curr_i % 10;
        curr_i /= 10;
        sum_last_3 += curr_i % 10;
        curr_i /= 10;
        sum_last_3 += curr_i % 10;
        curr_i /= 10;

        int sum_first_3 = 0;
        sum_first_3 += curr_i % 10;
        curr_i /= 10;
        sum_first_3 += curr_i % 10;
        curr_i /= 10;
        sum_first_3 += curr_i % 10;

        if (sum_first_3 == sum_last_3){
            n--;
            if (n==0){
                cout << i << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}
