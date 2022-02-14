#include <fstream>
#include <string>
#include <bitset>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int n;
    fin >> n;
    fin.ignore();
    string s;
    getline(fin,s);
    bitset<32> b(n);
    int key = b.count();
    for(int i = 0;i < s.size();i++){
        s[i] -= key;
    }
    fout << s;
    return 0;
}
