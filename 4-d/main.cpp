#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sum=0;
    for (int i = 1,two_power = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (i%two_power ==0){
            sum += a;
            two_power *= 2;
        }
    }
    cout << sum << endl;
    return 0;
}
