/**
 * C - March
 * https://atcoder.jp/contests/abc089/tasks/abc089_c
 **/
#include<iostream>
#include<string.h>
#include<vector>

#define ll long long

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> Sn(N);
    for(int i=0; i<N; ++i) cin >> Sn[i];
    vector<int> map(5, 0);
    for(auto si:Sn) {
        if(si[0]=='M') {
            map[0]++;
        } else if(si[0]=='A') {
            map[1]++;
        } else if(si[0]=='R') {
            map[2]++;
        } else if(si[0]=='C') {
            map[3]++;
        } else if(si[0]=='H') {
            map[4]++;
        }
    }
    // 5文字の内3文字を選んで計算
    long long ans = 0;
    for(int i=0; i<3; i++) {
        for(int j=i+1; j<4; j++) {
            for(int k=j+1; k<5; k++) {
                ans += (ll)map[i] * (ll)map[j] * (ll)map[k];
            }
        }
    }

    cout << ans << endl;
}