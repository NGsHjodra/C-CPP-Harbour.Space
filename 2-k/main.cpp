#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int remain_a = 150 - a;
    if (c - (a+b) < remain_a){
        cout << c - (a+b) << " " << 0 << endl;
        return 0;
    }
    {
        cout << remain_a << " " << (c - (a+b) - remain_a) << endl;
        return 0;
    }
}
