#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    int cnt = 0;
    n--;
    while (n) {
        n &= (n - 1);
        cnt++;
    }
    cout << cnt % k;
    return 0;
}
