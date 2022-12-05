#include <iostream>

using namespace std;

int main() {
    int a,x,b,y;
    cin >> a >> x >> b >> y;
    //c1v1 + c2v2 = c3v3
    cout << (a*x + b*y)/(a+b) << endl;
}