/**
 * C - Takahashi's Information
 * https://atcoder.jp/contests/abc088/tasks/abc088_c
 * 
 * 解法
 * 計算量: 
 * a1+b1        a1+b2        a1+b3          => 3a1+b1+b2+b3
 * a2+b1        a2+b2        a2+b3          => 3a2+b1+b2+b3
 * a3+b1        a3+b2        a3+b3          => 3a3+b1+b2+b3
 * 3b1+a1+a2+a3 3b2+a1+a2+a3 3b3+a1+a2+a3   => a1+a2+a3+b1+b2+b3
 **/
#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<vector<int>> c(3, vector<int>(3, 0));
    for(int i=0; i<3; i++) {
        cin >> c[i][0] >> c[i][1] >> c[i][2];
    }

    int sum = 0;
    for(int i=0; i<3; ++i) {
        for(int j=0; j<3; ++j) {
            sum += c[i][j];
        }
    }
    if((float)(c[0][0]+c[1][1]+c[2][2]) != (float)sum/3) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}