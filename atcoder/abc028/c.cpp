/**
 * C - 数を3つ選ぶマン
 * https://atcoder.jp/contests/abc028/tasks/abc028_c
 * 
 * Nが小さい時は、
 * ごり押しで行けるかを考える.
 **/
#include<iostream>

using namespace std;

int main() {
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    cout << max(e+c+b, e+d+a) << endl;
}