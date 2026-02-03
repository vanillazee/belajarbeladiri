#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, s, m;

    cin >> n >> s >> m;

    vector<int> A(n);
    for(int i=0;i<n;i++) {
        cin >> A[i];
    }

    vector<int> V(n);
    for(int i=0;i<n;i++) {
        V[i] = false;
    }

    int p = s-1;
    int h = 0;

    while (true) {
        if(p<0) {
            cout << "left\n";
            cout << h;
            return 0;
        } else if(p>n-1) {
            cout << "right\n";
            cout << h;
            return 0;
        } else if(V[p] == true) {
            cout << "cycle\n";
            cout << h;
            return 0;
        } else if(A[p] == m) {
            cout << "magic\n";
            cout << h;
            return 0;
        }

        V[p] = true;
        p += A[p];
        h += 1;
    }
}