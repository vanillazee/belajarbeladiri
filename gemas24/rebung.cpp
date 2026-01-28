#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    long long L;
    cin >> N >> L;

    vector<int> B(N);
    for(int i=0;i<N;i++) {
        cin >> B[i];
    }

    vector<long long> Long(1);
    Long[0] = L;
    for(int i=0;i<N;i++) {
        int p = B[i]-1;
        if(p == Long.size() - 1) {
            Long[p] = Long[p]/2;
            Long.push_back(Long[p]);
        } else {
            Long.push_back(Long[Long.size()-1]);
            for(int j = Long.size()-1;j>p+1;j--) {
                Long[j] = Long[j-1];
            }
            Long[p] = Long[p]/2;
            Long[p+1] = Long[p];
        }
    }

    for(long long x: Long) cout << x << " ";

    return 0;
}