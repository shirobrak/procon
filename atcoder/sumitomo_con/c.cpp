#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<iomanip>
#include<queue>
#include<cstring>

using namespace std;

const int MAX_X = 100000;

int dp[MAX_X+1];
int m[6]={1000000,1000000,1000000,1000000,1000000,1000000};
int a[6]={100,101,102,103,104,105};
int main() {
    int x;
    cin >> x;

    memset(dp, -1, sizeof(dp));
    dp[0] = 0;
    for (int i=0;i<6;i++) {
        for(int j=0; j<=x; j++) {
            if(dp[j] >= 0) {
                dp[j] = m[i];
            } else if (j < a[i] || dp[j-a[i]] <= 0) {
                dp[j] = -1;
            } else {
                dp[j] = dp[j-a[i]] - 1;
            }
        }
    }
    if(dp[x] >= 0) cout << "1" << endl;
    else cout << "0" << endl;

}