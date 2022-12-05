#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    cout << int((-b + sqrt(b*b-4*a*c)) / (2*a));
    cout << " ";
    cout << int((-b - sqrt(b*b-4*a*c)) / (2*a));
    cout << endl;
}