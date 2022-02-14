#include <iostream>
#include <bitset>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    n--;
    bitset<64> b(n);
    int h = b.count();
    h %= k;
    cout << h;
}
