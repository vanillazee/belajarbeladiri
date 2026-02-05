#include <bits/stdc++.h>
using namespace std;

bool Vocal(char v) {
    return v == 'a' || v == 'i' || v == 'u' || v == 'e' || v == 'o';
}

int main() {
    int T;
    cin >> T;

    while(T--) {
        string S;
        cin >> S;
        bool n = true;
        int s = S.size();

        for(int i = 0; i < s;) {
            if(!Vocal(S[i])) {
                i++;
                continue;
            }

            if(i+2 >= s || S[i+1] != 'g' || S[i] != S[i+2]) {
                n = false;
                break;
            }

            i += 3;
        }

        cout << (n ? "Begenagar" : "Sagalagah") << "\n";
    }

    return 0;
}