#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    vector<string> firstpic(n);
    for (int i = 0; i < n; i++) {
        cin >> firstpic[i];
    }
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        vector<int> ind;
        bool isAst = false;
        for (int j = 0; j < m; j++) {
            if (firstpic[i][j] == '*' && !isAst) {
                ind.push_back(j);
                isAst = true;
            }else
                isAst = false;
        }
        if (ind.empty())
            continue;

        for (int j : ind) {
            int cnt_y = 0, cnt_x = 1;
            for (int k = i; k < n; k++) {
                if(firstpic[k][j] == '.')
                    break;
                firstpic[k][j] = '.';
                cnt_y++;
            }
            for (int k = j+1; k < m; k++) {
                if(firstpic[i][k] == '.')
                    break;
                firstpic[i][k] = '.';
                cnt_x++;
            }
            for (int k = i; k < i + cnt_y; k++) {
                for (int l = j+1; l < j + cnt_x; l++) {
                    firstpic[k][l] = '.';
                }
            }

//            cerr << i << " " << j << " " << cnt_y << " " << cnt_x << endl;
            if (cnt_x*cnt_y > 0)
                ans.push_back(cnt_y*cnt_x);
        }

    }
    cout << ans.size() << endl;
    for (int i : ans){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
