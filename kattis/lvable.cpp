#include <iostream>
using namespace std;

int main() {
    int n;
    string s;

    cin >> n >> s;

    for(int i=0;i<s.length();i++) {
        if(i+1<s.length() && s[i] == 'l' && s[i+1] == 'v') {
            cout << 0;
            return 0;
        }
    }

    for(int i=0;i<s.length();i++) {
        if(s[i] == 'l' || s[i] == 'v') {
            cout << 1;
            return 0;
        }
    }

    cout << 2;

    return 0;
}