#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<map>
#include<set>
#include<numeric>
#include<functional>
#include<sstream>
#include<iomanip>

using namespace std;

#define ll long long

int main() {
    int n; cin >> n;
    vector<string> s(n);
    vector<int> t(n);
    for(int i=0; i<n; i++) cin >> s[i] >> t[i];
    string x; cin >> x;
    int target;
    for(int i=0; i<n; i++) {
        if(s[i]==x) {
            target = i;
            break;
        }
    }
    int ans = 0;
    if(target==n-1) {
        cout << 0 << endl;
        return 0;
    }
    for(int i=target+1; i<n; i++) {
        ans += t[i];
    }
    cout << ans << endl;
    return 0;
}
