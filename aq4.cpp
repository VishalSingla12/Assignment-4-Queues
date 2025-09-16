#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

void firstNonRepeating(string s) {
    unordered_map<char,int> count;
    queue<char> q;
    for (char c : s) {
        count[c]++;
        q.push(c);
        while (!q.empty() && count[q.front()] > 1) q.pop();
        if (q.empty()) cout << -1 << " ";
        else cout << q.front() << " ";
    }
    cout << endl;
}

int main() {
    string s = "aabc";
    firstNonRepeating(s);
}
