#include<iostream>
#include<vector>

using namespace std;

const int MAX_N = 200000;
const int MAX_Q = 200000;

class node 
{
    public:
        int left;
        int right;
        int count;
        void add(int x);
        void set_left(int x);
        void set_right(int x);
};

void node::add(int x) {
    node::count += x;
}

void node::set_left(int x) {
    node::left = x;
}

void node::set_right(int x) {
    node::right = x;
}

int N, Q;
node tree[MAX_N+1];

int main() {
    cin >> N >> Q;
    for(int i = 1; i < N+1; i++) {
        int ai, bi;
        cin >> ai >> bi;
    }
}