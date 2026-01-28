#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, D = 0;

    cin >> a >> b >> c >> d;

    D += a/3;
    if (a%3 != 0) {
        if(b != 0) {
            D += 1;
        } else {
            if(c != 0) {
                c += a%3;
                D += c/3;
                if(c%3 != 0) D += 1;
                D += d/3;
                if(d%3 != 0) D +=1;
                cout << D;
                return 0;
            } else {
                d += a%3;
                D += d/3;
                if(d%3 != 0) D += 1;
                cout << D;
                return 0;
            }
        }
    } 

    D += b/3;
    if(b%3 != 0) {
        if(c != 0) {
            c += b%3;
            D += c/3;
            if(c%3 != 0) D += 1;
            D += d/3;
            if(d%3 != 0) D +=1;
            cout << D;
            return 0;
        } else {
            d += b%3;
            D += d/3;
            if(d%3 != 0) D += 1;
            cout << D;
            return 0;
        }
    } 
    
    D += c/3;
    if(c%3 != 0) D += 1;

    D += d/3;
    if(d%3 != 0) D += 1;

    cout << D;

    return 0;
}