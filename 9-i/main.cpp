#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

map<string, set<string>> Mp;
void printall(string s, int h){
    for (int i = 0; i < h; i++) cout << "  ";
    cout << s << endl;
    if (Mp[s].empty())
        return;
    for (const string& m_s : Mp[s]) {
        printall(m_s, h+1);
    }
}

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    while (cnt<n) {
        string subTop, topic;
        cin >> subTop >> topic;
        if (Mp.empty())
            cnt++;
        Mp[topic].insert(subTop);
        cnt++;
    }
    printall("main",0);
    return 0;
}