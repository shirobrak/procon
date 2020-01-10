#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<cmath>
#include<algorithm>
#include<numeric>
#include<iomanip>

using namespace std;

vector<string> get_substrings(string s, int max_length=0) {
    set<string> set_substrs;
    if(max_length==0) {
        max_length = s.length();
    } else {
        max_length = min(max_length, (int)s.length());
    }
    for(int i=1; i<=max_length; ++i) {
        // 部分文字列の長さが i の文字列を作成
        for(int j=0; j<=s.length()-i; ++j) {
            string substr = s.substr(j, i);
            set_substrs.insert(substr);
        }
    }
    vector<string> substrs;
    for(auto str:set_substrs) {
        substrs.push_back(str);
    }
    return substrs;
}

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    int ans=0;
    for(int i=1; i<=s.length(); ++i) {
        // 部分文字列の長さが i の文字列を作成
        for(int j=0; j<=s.length()-i; ++j) {
            string substr = s.substr(j, i);
            if(substr=="ABC") {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}