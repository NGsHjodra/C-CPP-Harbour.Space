#include <iostream>

using namespace std;

int main() {
    int p,k;
    cin >> p >> k;
    //p/(k+1)*2
    int w = p/((k+1)*2);
    int l = k*w;
    cout << w*l << endl;
}