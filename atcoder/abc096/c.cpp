/**
 * C - Grid Repainting 2
 * https://atcoder.jp/contests/abc096/tasks/abc096_c
 **/
#include<iostream>
#include<vector>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<int>> s(H+2, vector<int>(W+2, 0));
    for(int i=1; i<H+1; i++) {
        for(int j=1; j<W+1; j++) {
            char tmp;
            cin >> tmp;
            if(tmp == '#') {
                s[i][j] = 1;
            } else {
                s[i][j] = 0;
            }
        }
    }
    bool flag=true;
    for(int i=1; i<H+1; i++) {
        for(int j=1; j<W+1; j++) {
            if(s[i][j]==1) {
                if(s[i-1][j]+s[i][j-1]+s[i][j+1]+s[i+1][j]==0) {
                    flag = false;
                }
            }
        }
    }

    if(flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}