#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<string> dots;
    vector<string> nums;
    vector<string> words;
    vector<int> orders;
    string dot;
    string num;
    string word;
    string tmp;
    for (const char &c : s) {
        if (c == '.' ) {
            dot += c;
            if (!num.empty()) {
                orders.push_back(1);
                nums.push_back(num);
                num = "";
            }
            if (!word.empty()) {
                orders.push_back(2);
                words.push_back(word);
                word = "";
            }
        }else if (isalpha(c)) {
            word += c;
            if (!num.empty()) {
                orders.push_back(1);
                nums.push_back(num);
                num = "";
            }
            if (!dot.empty()) {
                orders.push_back(0);
                dots.push_back(dot);
                dot = "";
            }
        }else if (isdigit(c)) {
            num += c;
            if (!dot.empty()) {
                orders.push_back(0);
                dots.push_back(dot);
                dot = "";
            }
            if (!word.empty()) {
                orders.push_back(2);
                words.push_back(word);
                word = "";
            }
        }
    }
    if (!dot.empty()) {
        orders.push_back(0);
        dots.push_back(dot);
    }
    if (!num.empty()) {
        orders.push_back(1);
        nums.push_back(num);
    }
    if (!word.empty()) {
        orders.push_back(2);
        words.push_back(word);
    }
    int cntDot = 0, cntWord = 0, cntNum = 0;
    for (int e : orders) {
        if (e==0) {
            cout << dots[cntDot];
            cntDot++;
        }else if (e==1 || e==2) {
            if (cntNum < nums.size()){
                cout << nums[cntNum];
                cntNum++;
            }else {
                cout << words[cntWord];
                cntWord++;
            }
        }
    }
    return 0;
}