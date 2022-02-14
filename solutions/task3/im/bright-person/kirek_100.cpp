#include <iostream>
#include <fstream>

using namespace std;

int main () {
    ifstream cin ("input.txt");
    ofstream cout ("output.txt");
    long long n, q; cin >> n >> q;
    while (q--) {
        string tp; cin >> tp;
        long long x, y; cin >> x >> y;
        cout << (x ^ y) << '\n';
    }
    return 0;
}
