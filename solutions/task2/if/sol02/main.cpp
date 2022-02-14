#include<fstream>
#include<string>
#include<vector>

using namespace std;


int32_t main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int n;
    fin >> n;
    vector<int> v;
    v.push_back(0);
    while (v.size() <= n) {
        int m = v.size();
        for (int j = 0; j < m; j++)
            v.push_back(v[j] + 1);
    }
    string s;
    fin >> s;
    n = v[n];
    for (char &it: s)
        it -= n;
    fout << s;
    return 0;
}
