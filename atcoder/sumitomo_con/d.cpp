#include<iostream>
#include<string.h>
#include<vector>
#include<math.h>
#include<iomanip>
#include <algorithm>

using namespace std;

int vector_finder(vector<int> vec, int number) {
  auto itr = find(vec.begin(), vec.end(), number);
  size_t index = distance( vec.begin(), itr );
  if (index != vec.size()) { // 発見できたとき
    return 1;
  }
  else { // 発見できなかったとき
    return 0;
  }
}

int main() {
    int N;
    string S;
    cin >> N;
    cin >> S;
    vector<string> set;

    for(int i=0;i<N;i++) {
        for(int j=0;i<N;i++) {
            for(int k=0;i<N;i++) {
                string ps;
                ps = S[i] + S[j] + S[k];
            }
        }
    }

    cout << set.size() << endl;

    return 0;
}