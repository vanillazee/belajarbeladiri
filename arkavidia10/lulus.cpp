#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    bool l = true;

    cin >> n >> x;

    vector<int> A(n);
    for(int i=0;i<n;i++) {
        cin >> A[i];
    }

    A.erase(A.begin() + x - 1);

    for(int i=0;i<n-1;i++) {
        if(i+1 > n-2) break;
        if(A[i] > A[i+1]) {
            l = false;
        }
    }

    cout << l;

    return 0;
}