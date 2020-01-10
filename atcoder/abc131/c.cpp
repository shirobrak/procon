/**
 * C - Anti-Division
 * https://atcoder.jp/contests/abc131/tasks/abc131_c
 **/
#include<iostream>

using namespace std;

long gcd(long a, long b) {
    if(a < b) {
        long tmp_a = a;
        a = b;
        b = tmp_a;
    } else if (a == b) {
        return a;
    }
    long r = a%b;
    while(r != 0) {
        a = b;
        b = r;
        r = a%b;
    }
    return b;
}

int main() {
    long A, B, C, D;
    cin >> A >> B >> C >> D;
    long lcm_c_d = C * D / gcd(C, D);
    long q_num_1 = (long)B/C + (long)B/D - (long)B/lcm_c_d;
    long q_num_2 = (long)(A-1)/C + (long)(A-1)/D - (long)(A-1)/lcm_c_d;
    cout << B - A  + 1 - (q_num_1-q_num_2) << endl;
    return 0;
}
