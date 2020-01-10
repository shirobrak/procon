/**
 * C - Same Integers
 * https://atcoder.jp/contests/abc093/tasks/arc094_a
 **/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    vector<int> ABC(3);
    for(int i=0; i<3; i++) cin >> ABC[i];
    sort(ABC.begin(), ABC.end());
    int ans = 0;
    ans += (ABC[2] - ABC[1]);
    if((ABC[1]-ABC[0])%2==0) {
        ans += (ABC[1]-ABC[0])/2;
    } else {
        ans += (ABC[1]-ABC[0]+1)/2 + 1;
    }

    cout << ans << endl;
    return 0;
}