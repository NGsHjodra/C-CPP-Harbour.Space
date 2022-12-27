#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int v1,v2,v3,s;
    cin >> v1 >> v2 >> v3 >> s;
    cout << setprecision(6) << fixed;
    if (5*60*v1 >= s) {
        cout << setprecision(6) << float(float(s) / float(v1)) << endl;
        return 0;
    }
    s -= 5*60*v1;
    if (10*60*v2 >= s) {
        cout << setprecision(6) << float(300.0 + (float(s) / float(v2))) << endl;
        return 0;
    }
    s -= 10*60*v2;
    {
        cout << setprecision(6) << float(900.0 + (float(s) / float(v3))) << endl;
    }
    return 0;
}
