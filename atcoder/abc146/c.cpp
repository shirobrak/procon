#include<iostream>
#include<math.h>

using namespace std;

/**
 * C - Buy an Integer
 * https://atcoder.jp/contests/abc146/tasks/abc146_c
 * 
 * 解法のポイント
 * 普通に探索すると最悪O(10^9)かかる為、TLE確実.
 * 2分探索を使って探す事でO(log10^9)にできる.
 **/

const long MAX_N = 1000000000;

long a, b;
long long x;
long n;

int get_digit(long n) {
    return std::to_string(n).length();
}

long get_price(long tmp_n) {
    return a * tmp_n + b * get_digit(tmp_n);
}

long binary_search(long start, long end) {
    while(end - start > 1) {
        long mid = (end+start)/2;
        long price = get_price(mid);
        if(price < x) {
            start = mid;
        } else if (price > x) {
            end = mid;
        } else {
            return mid;
        }
    }
    return start;
}

long solve() {
    if(get_price(1) > x) {
        return 0;
    } else if (get_price(MAX_N) <= x) {
        return MAX_N;
    } else {
        return binary_search(1, MAX_N);
    }
}

int main() {
    cin >> a >> b >> x;
    long ans;
    ans = solve();
    
    cout << ans << endl;
}
