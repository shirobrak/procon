/**
 * C - Otoshidama
 * https://atcoder.jp/contests/abc085/tasks/abc085_c
 **/
#include<iostream>

using namespace std;

int main() {
    int N, Y;
    cin >> N >> Y;
    bool flag = false;
    int ax = -1, ay = -1, az = -1;
    int x = Y/10000;
    for(int i=x; i>=0; i--) {
        int y = (Y-10000*i)/5000;
        for(int j=y; j>=0; j--) {
            int z = (Y-10000*i-5000*j)/1000;
            if((Y-10000*i-5000*j)%1000==0) {
                if(i+j+z==N) {
                    flag = true;
                    ax = i;
                    ay = j;
                    az = z;
                }
            }
        }
    }
    if(flag==false) {
        ax = -1;
        ay = -1;
        az = -1;
    }
    cout << ax << " " << ay << " " << az << endl;
    
}