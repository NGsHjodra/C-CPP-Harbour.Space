#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int k,x;
    cin >> k >> x;

    //cout << x/k << x/k;

    //(k/2)(f+l)=x
    //(f+l)/2 = x/k
    //f = ? l = ?
    //cout << f << l;
    //k = f - l +1

    //(f+l)/2 = x/(f-l+1)
    //(f+l)/2 * (f-l+1) = x
    //(ff - fl + f + lf - ll + l)/2 = x

    int f = ((2*x)/k + (1-k))/2;
    cout << f << " " <<f+k-1 << endl;
}