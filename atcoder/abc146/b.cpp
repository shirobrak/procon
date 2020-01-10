#include<iostream>
#include<string>

using namespace std;

int N;
string S;
string ans;
const string DICT = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main() {
    cin >> N;
    cin >> S;
    for (int i = 0; i < S.length(); i++)
    {
        int tmp_index = DICT.find_first_of(S[i]);
        // cout << tmp_index << endl;
        int tns_index = (tmp_index + N) % 26;
        // cout << tns_index << endl;
        ans += DICT[tns_index];
        // cout << DICT[tns_index] << endl;
    }
    cout << ans << endl;
    
}