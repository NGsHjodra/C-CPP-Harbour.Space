#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int power_of_b = 1, cnt = 0;
    while (a>=power_of_b){

        if(a == power_of_b){
            cout << cnt << endl;
            return 0;
        }
        cnt++;
        power_of_b *= b;
    }
    cout << -1 << endl;
    return 0;
}
