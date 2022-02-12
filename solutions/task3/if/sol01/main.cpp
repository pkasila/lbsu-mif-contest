// медленное решение

#include <iostream>
#include <vector>

using namespace std;

int main() {
    uint64_t divider = 1e9 + 7;

    int questions_count;
    cin >> questions_count;

    for (int question = 0; question < questions_count; question++) {
        int n, p;
        cin >> n >> p;

        uint64_t counter = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if ((i ^ j) & (1ll << (p - 1))) {
                    counter++;
                }
            }
        }

        counter %= divider;

        cout << counter << endl;
    }
    return 0;
}