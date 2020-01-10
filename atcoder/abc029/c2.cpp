#include<iostream>
#include<string>

using namespace std;

void dfs(int n, int m, string s) {
    if (n==m) {
        cout << s << endl;
        return;
    }
    dfs(n, m+1, s+'a');
    dfs(n, m+1, s+'b');
    dfs(n, m+1, s+'c');
}

int main() {
    int n; cin >> n;
    dfs(n, 0, "");
}