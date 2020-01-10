#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;
    int ans = ceil(N/1.08);    
    if(floor(ans*1.08)!=N) {
        cout << ":(" << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}