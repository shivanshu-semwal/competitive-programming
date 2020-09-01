#include <iostream>
#include <vector>

using namespace std;

int f(string s) {
    char min = s[0];
    for (auto a : s) {
        if (a < min)
            min = a;
    }
    int count = 0;
    for (auto a : s) {
        if (a == min)
            count++;
    }
    return count;
}

vector<int> cal(vector<string> queries, vector<string> words) {
    vector<int> ans;
    for (auto q : queries) {
        int count = 0;
        for (auto w : words) {
            if(f(q)<f(w)){
                count++;
            }
        }
        ans.emplace_back(count);
    }
    return ans;
}

int main() {
    vector<string> queries;
    vector<string> words;
    string s;
    int n;
    int m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        queries.emplace_back(s);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> s;
        words.emplace_back(s);
    }
    vector<int> ans = cal(queries, words);
    for(auto i:ans){
        cout << " " << i << " ";
    }
    return 0;
}