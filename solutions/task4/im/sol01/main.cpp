#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    vector <int> ar(k);
    for (int i = 0; i < k; ++i) {
        a *= 3;
        ar[i] = (a / b);
        a %= b;
    }
    int pos = find(ar.begin(), ar.end(), 1) - ar.begin();
    if (pos == ar.size()) {
        cout << "NO" << '\n';
    }
    else {
        bool have = 0;
        for (int i = pos + 1; i < k; ++i) {
            have |= (ar[i] != 0);
        }
        cout << (!have ? "NO" : "YES");
    }
}
