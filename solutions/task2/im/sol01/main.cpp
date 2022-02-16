#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    vector<int> seq;
    seq.push_back(0);
    while (seq.size() < n) {
        vector<int> curr = seq;
        for (int i = 0; i < curr.size(); i++) {
            curr[i]++;
        }
        seq.insert(seq.end(), curr.begin(), curr.end());
    }
    cout << seq[n - 1] % k;
    return 0;
}
