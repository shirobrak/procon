#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> color(9, 0);
    for(int i=0; i<n; i++) {
        int ai;
        cin >> ai;
        if(ai<400) {
            color[0] = 1;
        } else if(ai<800) {
            color[1] = 1;
        } else if(ai<1200) {
            color[2] = 1;
        } else if(ai<1600) {
            color[3] = 1;
        } else if(ai<2000) {
            color[4] = 1;
        } else if(ai<2400) {
            color[5] = 1;
        } else if(ai<2800) {
            color[6] = 1;
        } else if(ai<3200) {
            color[7] = 1;
        } else {
            color[8] += 1;
        }
    }
    int c = 0;
    for(int i=0; i<8; i++) {
        c += color[i];
    }

    int max_c = 0;
    if(c>0) {
        max_c = c+color[8];
    } else {
        c = 1;
        max_c = color[8];
    } 
    cout << c << " " << max_c << endl;
    return 0;
}