#include<iostream>
#include<string.h>

using namespace std;

const int MAX_N = 100;
const int MAX_M = 100;
int N, M;
int map[MAX_N][MAX_M];
string Cmds;

void solve() {
    for(auto cmd:Cmds) {
        for(int i=0; i<N;i++) {
            for(int j=0; j<M; j++) {
                
            }
        }
        if(cmd == 'U') {
            // U
            for(int i=0; i<M; i++) {
                for(int j=0; j<N-1; j++) {
                    int next_i_j, next_i_j_1;
                    if(map[j][i] == map[j+1][i]) {
                        next_i_j = 2*map[j][i];
                        next_i_j_1 = 0;
                    } else if(map[j][i] == 0) {
                        // 寄せる

                        next_i_j = map[j+1][i];
                        next_i_j_1 = 0;
                    } else {
                        next_i_j = map[j][i];
                        next_i_j_1 = map[j+1][i];
                    }
                    map[j][i] = next_i_j;
                    map[j+1][i] = next_i_j_1;
                }
            }
        } else if (cmd == 'D') {
            // D
            // cout << "D" << endl;
            // cout << M << endl;
            for(int i=0; i<M; i++) {
                for(int j=N-1; j>=1; j--) {
                    int next_i_j, next_i_j_1;
                    if(map[j][i] == map[j-1][i]) {
                        next_i_j = 2*map[j][i];
                        next_i_j_1 = 0;
                    } else if (map[j][i] == 0) {
                        next_i_j = map[j-1][i];
                        next_i_j_1 = 0;
                    } else {
                        next_i_j = map[j][i];
                        next_i_j_1 = map[j-1][i];
                    }
                    // cout << next_i_j << " " << next_i_j_1 << endl;
                    map[j][i] = next_i_j;
                    map[j-1][i] = next_i_j_1;
                }
            }
        } else if (cmd == 'R') {
            // R
            // cout << "R" << endl;
            for(int i=0; i<N; i++) {
                // N を固定
                for(int j=M-1; j>=0; j--) {
                    // Mを左端から未テク
                    int next_i_j, next_i_j_1;
                    if(map[i][j] == map[i][j-1]) {
                        next_i_j = 2*map[i][j];
                        next_i_j_1 = 0;
                    } else if (map[i][j] == 0) {
                        next_i_j = map[i][j-1];
                        next_i_j_1 = 0;
                    } else {
                        next_i_j = map[i][j];
                        next_i_j_1 = map[i][j-1];
                    }
                    map[i][j] = next_i_j;
                    map[i][j-1] = next_i_j_1;
                }
            }
        } else {
            // L
            // cout << "L" << endl;
            for(int i=0; i<N; i++) {
                for(int j=0; j<M-1; j++) {
                    int next_i_j, next_i_j_1;
                    if(map[i][j] == map[i][j+1]) {
                        next_i_j = 2*map[i][j];
                        next_i_j_1 = 0;
                    } else if(map[i][j] == 0){
                        next_i_j = map[i][j+1];
                        next_i_j_1 = 0;
                    } else {
                        next_i_j = map[i][j];
                        next_i_j_1 = map[i][j+1];
                    }
                    map[i][j] = next_i_j;
                    map[i][j+1] = next_i_j_1;
                }
            }
        }
        for(int i=0; i<N; i++) {
            for(int j=0; j<M; j++) {
                if(j==M-1) {
                    cout << map[i][j] << endl;
                } else {
                    cout << map[i][j] << " ";
                }
            }
        }
        cout << endl;
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(j==M-1) {
                cout << map[i][j] << endl;
            } else {
                cout << map[i][j] << " ";
            }
        }
}
}

int main() {
    cin >> N >> M;
    for(int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
        {
            cin >> map[i][j];
        }
    }
    cin >> Cmds;

    solve();
    return 0;
}