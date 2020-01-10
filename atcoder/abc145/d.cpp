/**
 * D - Knight
 * https://atcoder.jp/contests/abc145/tasks/abc145_d
 **/
#include<iostream>

using namespace std;

const long Q = 1000000007;

int main() {
    int X, Y;
    cin >> X >> Y;

    long a, b;
    a = (2*Y-X)/3;
    b = (2*X-Y)/3;

    if((2*Y-X <= 0)||(2*X-Y)<=0||(2*Y-X)%3!=0||(2*X-Y)%3!=0) {
        cout << 0 << endl;
        return 0;
    }  

    cout << a << endl;
    cout << b << endl;

    long sita = 1;
    for(int i=1; i<a+1; i++) {
        sita = sita * i;
        cout << sita << endl;
    }
    cout << sita << endl;
    long long ue = 1;
    for(int i = a+b; i>a; i--) {
        ue = ue * i;
    }

    cout << ue / sita << endl;

}