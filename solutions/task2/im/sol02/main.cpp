#include <iostream>

using namespace std;


int main() {


    long long n, k;

    cin >> n >> k;

    string x = "0";

    while (x.length() < n) {


        string s = x;
        for (auto &e: s) {
            e++;
        }
        x += s;

    }
    cout << (x[n - 1] - '0') % k;


}
