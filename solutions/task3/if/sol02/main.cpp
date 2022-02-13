// медленное решение (bitset)

#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int q, p;
    long long n;
    cin >> q;
    while (q--) {
        long long t = 0;
        cin >> n >> p;
        for (long long i = 0; i < n; i++) {
            for (long long j = 0; j < n; j++) {
                bitset<64> b(i ^ j);
                if (b.test(p - 1))
                    t++;
            }
        }
        cout << t % 1000000007 << endl;
    }
}
