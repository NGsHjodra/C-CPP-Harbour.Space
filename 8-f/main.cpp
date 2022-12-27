#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    // row and columns
    int n, m;
    cin >> n >> m;
    vector<vector<int>> vvi( n , vector<int> (m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> vvi[i][j];
        }
    }
    int minNow,expense = 0;
    vector<bool> Alive_Job(n , true);
    vector<bool> Alive_Worker(m, true);
    for (int i = 0; i < min(n, m); i++) {
        minNow = INT_MAX-1;
        int x,y;
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                if (vvi[j][k] < minNow && Alive_Job[j] && Alive_Worker[k]){
                    minNow = vvi[j][k];
                    y = j;
                    x = k;
                }
            }
        }
        cerr << vvi[y][x] << endl;
        expense += vvi[y][x];
        Alive_Job[y] = false;
        Alive_Worker[x] = false;
    }
    cout << expense << endl;
    return 0;
}
