#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<cmath>
#include<algorithm>
#include<numeric>
#include<iomanip>
#include <functional>
#include <sstream>

using namespace std;

int main() {
  int n; cin >> n;
  string p = "", q = "";
  for(int i=0; i<n; i++) {
      char tmp; cin >> tmp;
      p += tmp;
  }
  for(int i=0; i<n; i++) {
      char tmp; cin >> tmp;
      q += tmp;
  }
  vector<string> dic;
  vector<int> v(n);
    iota(v.begin(), v.end(), 1);       // v に 1, 2, ... N を設定
    do {
        string tmp = "";
        for(int i=0; i<v.size(); i++) {
            ostringstream ss;
            ss << v[i];
            tmp = tmp + ss.str();
        }
        dic.push_back(tmp);
    } while( next_permutation(v.begin(), v.end()) );     // 次の順列を生成
    sort(dic.begin(), dic.end());
    int a, b;
    for(int i=0; i<dic.size(); i++) {
        if(dic[i]==p) {
            a = i+1;
        }
        if(dic[i]==q) {
            b = i+1;
        }
    }
    cout << abs(a-b) << endl;
    return 0;
}