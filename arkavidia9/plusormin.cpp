#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    bool p = true;

    if(N<2) {
        p = false;
    } else if(K >= 0 && N%2 != K%2) {
        p = false;
    } else if(K < 0 && N%2 != (-1*K)%2) {
        p = false;
    } else if(K < 2-N) {
        p = false;
    } else if(N < K) {
        p = false;
    }

    cout << (p ? "YES" : "NO");

    return 0;
}