/**
 * C - Next Prime
 * https://atcoder.jp/contests/abc149/tasks/abc149_c
 **/
#include<iostream>
#include<cmath>

using namespace std;

bool is_prime(int x) {
  for(int i=2; i<ceil(sqrt(x)); i++) {
    if(x%i==0) return false;
  }
  return true;
}

int main() {
  int X;
  cin >> X;
  int ans = X;
  while(true) {
    if(is_prime(ans)) {
      break;
    }
    ans++;
  }
  cout << ans << endl;
  return 0;
}
