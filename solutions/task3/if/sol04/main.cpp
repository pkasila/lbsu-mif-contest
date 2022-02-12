// быстрое решение

#include <iostream>

using namespace std;

const long long MOD = 1e9 + 7;

int main(){
    int q;
    cin >> q;
    for (int id = 0; id < q; id++){
        long long n, p;
        cin >> n >> p;

        long long t = (1ll << (p - 1));
        long long b = n / t;
        long long s = n % t;

        long long c = b / 2 * t;
        if (b % 2 == 1){
            c += s;
        }

        long long res = 0;
        n %= MOD;
        c %= MOD;
        res += (c * ((n - c + MOD) % MOD)) % MOD; // (i, j)
        res *= 2; // (j, i)
        res %= MOD;
        cout << res << "\n";
    }
    return 0;
}