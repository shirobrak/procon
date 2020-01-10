/**
 * C - Multiple Gift
 * https://atcoder.jp/contests/abc083/tasks/arc088_a
 **/
#include<iostream>
#include <cmath>
#include <limits>
 
using namespace std;
 
int main() {
    long long X, Y;
    cin >> X >> Y;
    cout << floor(log2((long double)Y/(long double)X)+1) << endl;
}