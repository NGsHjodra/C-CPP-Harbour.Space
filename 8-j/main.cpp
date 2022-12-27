#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> vvi(199, vector<int> (199));
int N;

void printall(int curr_y, int curr_x, int n){
    if (vvi[curr_y][curr_x] == N*N/2 + 1){
        cout << vvi[curr_y][curr_x] << " ";
        return;
    }
    if (curr_x == n - 1 && curr_y < n - 1)
        printall(curr_y + 1, curr_x, n);
    if (curr_y == n - 1 && curr_x > N - n)
        printall(curr_y, curr_x - 1, n);
    if (curr_x == N - n && curr_y > N - n)
        printall(curr_y - 1, curr_x, n);
    if (curr_y == N - n && curr_x < n - 2)
        printall(curr_y, curr_x + 1, n);
    if (curr_y == N - n && curr_x == n - 2)
        printall(curr_y + 1, curr_x, n - 1);
    cout << vvi[curr_y][curr_x] << " ";
}

int main() {

    int n;
    cin >> n;
    for (int i = 0, cnt = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            vvi[i][j] = cnt++;
        }
    }
    N = n;
    printall(0, n-1, n);
    cout << endl;
    return 0;
}
